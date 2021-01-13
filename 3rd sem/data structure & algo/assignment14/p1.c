/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-14 			Date: 06-01-2021
1. Write a program in C to convert an infix expression into its equivalent postfix notation..*/

#include<stdio.h>
#include<string.h>
int priority(char ch)// return priority of the operator
{
    if(ch=='^')   
     return 4 ;
    else if(ch=='*' || ch=='/')
     return 3;
    else if(ch=='+' || ch=='-')
     return 2;
    else // (
     return 1;
}
void main()
{
    char infix[100],postfix[100],stack[30];
    int top=-1 ;// initialize
    int index=0;// to point index value of posyfix expression
    int i;
    
    printf("Enter the infix expression ");
    scanf("%s",infix); // store infix expression from user
    strupr(infix);// convert into uppercase
    for(i=0;i<strlen(infix);i++)
    {
        if(infix[i]=='(')
         stack[++top]=infix[i];
         
        else if(infix[i]>='A' && infix[i]<='Z') // operand
          postfix[index++]=infix[i]; // place the operand into postfix expression
          
        else if(infix[i]==')')
         {
             while(stack[top]!='(')
              postfix[index++]=stack[top--]; 
              
            top-- ;// remove ( from stack top
         }
         else  // operator 
         {
            if(priority(infix[i])>priority(stack[top]))// high priority 
              stack[++top]=infix[i];
            else // same or lower priority 
            {
                while(priority(infix[i])<=priority(stack[top]))
                 postfix[index++]=stack[top--]; 
                 
                stack[++top]=infix[i];
            
            }
         }
         stack[++top]='\0';
         postfix[index]='\0';
         printf("\n %c \t %s \t %s",infix[i],stack,postfix);
         top--;
    }
    
}
