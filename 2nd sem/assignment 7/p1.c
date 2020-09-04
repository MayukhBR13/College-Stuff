#include<stdio.h>
#include<string.h>
void main()
{
	char f_name[20],l_name[20],fn_rev[20],name[40];
	int i,len;
	printf("Enter your first name: ");
	scanf("%s",f_name);
	strupr(f_name);
	printf("Enter your last name: ");
	scanf("%s",l_name);
	strupr(l_name);
	for(i=0,len=strlen(f_name);i<=len/2;i++)
	{
		fn_rev[len-1-i]=f_name[i];
		fn_rev[i]=f_name[len-1-i];
	}	
	fn_rev[len]='\0';
	strcpy(name,f_name);
	strcat(name," ");
	strcat(name,l_name);
	printf(" Hi %s,\n\tyour first name %s is ",name,fn_rev);//f_name);
	if(strcmp(f_name,fn_rev))
		printf("not ");	
	printf("a palindrome word");
	
}
