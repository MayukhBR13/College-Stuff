#include <stdio.h>
//Write here the prototype of the function matprint & Transp
void matprint(int *A,int m,int n);
void Transp(int *A,int m,int n,int *mt,int *nt);
int main()
{
 int m = 10, n = 20;//10,20
 int A[m][n],mt,nt,i, j;int *l;
 printf("Enter row and column dim. of the matrix: ");
 scanf("%d%d",&m, &n);
 //Read here the element of the matrix row wise
 for(i=0;i<m;i++)
 {
 	printf("\n Enter row %d",i+1);
 	for(j=0;j<n;j++)
 	{
 		scanf("%d",l=&A[i][j]);
 		printf("*%u",l);
 	}
 }
 matprint(A,m,n);
 Transp(A,m,n,&mt,&nt);
 matprint(A,mt,nt);
 return 0;
}
//Write here the details of the function matprint
void matprint(int *A,int m,int n)
{
	int i,l;
	for(i=0;i<m;i++)
	{
		for(l=0;l<n;l++)
		{
			printf("%d ",*(A+i*20+l));
		}
		printf("\n");
	}
}
//Write here the details of the function Transp
void Transp(int *A,const int m,const int n,int *mt,int *nt)
{
	int i,l,b[n][m];
	for(i=0;i<m;i++)
	{
		for(l=0;l<n;l++)
			b[l][i]=*(A+20*i+l);
	}
	for(i=0;i<m;i++)
	{
		for(l=0;l<n;l++)
			*(A+20*i+l)=b[i][l];
	}
	*mt=n;
	*nt=m;
}
