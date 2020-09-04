#include<stdio.h>
typedef struct
{
	char name[20];
	int roll;
	int year;
	char stream[10]		
}student;
void InputStudent(student *a)
{
	printf("Enter student's name:");
	fflush(stdin);
	gets(a->name);
	printf("Enter student's roll:");
	scanf("%d",&a->roll);
	printf("Enter student's stream:");
	fflush(stdin);
	scanf("%s",a->stream);
	printf("Enter student's year:");
	scanf("%d",&a->year);
}
void PrintStudent(student *a)
{
	printf("\n----------------------------------------------\n");
	printf("Name: %s\nyear: %d\nRoll: %d\nStream: %s",a->name,a->year,a->roll,a->stream);
	//printf("\n----------------------------------------------\n");
}
void main()
{
	student *stu;
	int n,i;
	printf("Enter the no. of student:");
	scanf("%d",&n);
	stu=(student*)calloc(n,sizeof(student));
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d details:\n",i+1);
		InputStudent(&stu[i]);
	}
	printf("\nStudent details:\n",i+1);
	for(i=0;i<n;i++)
	{
		PrintStudent(&stu[i]);
	}
}

