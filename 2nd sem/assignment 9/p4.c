#include<stdio.h>
char stringComp(const char* str1,const char* str2)
{
	int d,i;
	//for(d=*str1-*str2,i=1;!d || !(d==0 && *str1=='\0');i++)
	for(i=0;str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0';i++);
	return str1[i]-str2[i];
}
void main()
{
	char a[100],b[100],d;
	printf("Enter 2 word: ");
	scanf("%s%s",&a,&b);
	d=stringComp(a,b);
	if(d>0)
		printf(" %s > %s ",a,b);
	else if(d<0)
		printf(" %s < %s ",a,b);
	else
		printf(" %s = %s ",a,b);
}
