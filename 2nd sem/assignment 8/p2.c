#include<stdio.h>
/*don't give any input in command line.so default argc is 1*/
void main(int argc,int n )
{
	if(argc==1)
	{
		if(printf("Enter a no.: ")){}
		if(scanf("%d",&n)){}
	}
	if(argc<=n)
	{
		if(printf(" %d",argc)){}
		if((main(argc+1,n),1)){}
	}	
}
