#include<stdio.h>
#include<string.h>
int compstr(const char *str1,const char *str2)
{
	for(;*str1!='\0' && *str2!='\0';str1++,str2++)
	{
		if(*str1!=*str2)
			break;
	}
	return *str2-*str1;
}
char* concat(char* str1,const char* str2)
{
	char *c=str1;
	for(;*str1!='\0';str1++);
	for(;*str2!='\0';str2++,str1++)
		*str1=*str2;
	*str1='\0';
	return c;
}
void main()
{
	char f_name[20],l_name[20],name[40],fn_rev[20];
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
	concat(name," ");
	printf(" Hi %s,\n\tyour first name %s is ",concat(name,l_name),fn_rev);//f_name);
	if(compstr(f_name,fn_rev))
		printf("not ");	
	printf("a palindrome word");
	
}
