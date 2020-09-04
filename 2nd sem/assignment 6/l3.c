#include<stdio.h>
typedef struct stu{
	int roll;
	char address[31];
	char name[31];
}student;
void InputStudent(student *a){
	printf("Enter student's name:");
	fflush(stdin);
	gets(a->name);
	printf("Enter student's roll:");
	scanf("%d",&a->roll);
	printf("Enter student's address:");
	fflush(stdin);
	gets(a->address);
}
void PrintStudent(student *a){
	printf("\n----------------------------------------------\n");
	printf("Name: %s\nRoll: %d\nAddress: %s",a->name,a->roll,a->address);
	printf("\n----------------------------------------------\n");
}
void StoreData(const char *a){
	FILE *fp;
	student st;
	if((fp=fopen(a,"ab"))==NULL)
	{	
		printf(" Input-File not found! ");
		return;
	}
	InputStudent(&st);
	fwrite(&st,sizeof(student),1,fp);
	if(!fclose(fp)){
		printf("\n Database Successfully Updated with :");
		PrintStudent(&st);
	}
}
void FindDisplayRecord(const char *a){
	FILE *fp;
	student st;
	int roll,len,i,f=-1;
	printf("Enter the roll no.: ");
	scanf("%d",&roll);
	if((fp=fopen(a,"rb"))==NULL)
	{	
		printf(" Database-File not found! ");
		return;
	}
	fseek(fp,0,SEEK_END);
	len=ftell(fp)/sizeof(student);
	fseek(fp,0,SEEK_SET);
	for(i=0;i<len;i++)
	{
		fread(&st,sizeof(student),1,fp);
		if(st.roll==roll)
		{
			printf("Match found:");
			PrintStudent(&st);
			f=0;
			break;
		}
	}
	if(f==-1)
		printf("\nNo match found");
	if(fclose(fp)){
		printf("\n Can't close Database:");
		PrintStudent(&st);
	}
	
}
void main(){
	char *name="student.dat";
	int c;
	do{
		printf("\n1. Add Student info.\n2. Find Student info.\n0. Exit\n Enter: ");
		fflush(stdin);
		scanf("%d",&c);
		switch(c){
			case 1: StoreData(name);
				break;
			case 2: FindDisplayRecord(name);
				break;
			default: printf("Non-existing input...\n ");
		}
	}while(c!=0);
	/*printf("Enter the no. of element: ");
	scanf("%d",&n);
	if((fp=fopen("input.txt","w"))==NULL)
	{	
		printf(" File not found! ");
		return;
	}
	printf("Enter %d no. ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		fprintf(fp,"%d ",a);
	}
	fclose(fp);*/
}
