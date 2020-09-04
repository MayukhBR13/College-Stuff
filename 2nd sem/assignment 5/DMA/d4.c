#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    char *txt;
    printf("Enter maximum limit of the text: ");
    scanf("%d",&n);
    txt=(char*)malloc(n*sizeof(char));
    printf("Enter text: ");
    fflush(stdin);
    gets(txt);
    printf("Text:\n%s\n",txt);
    free(txt);
}

