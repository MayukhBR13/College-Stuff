/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-13 			Date: 30-12-2020
1. Write a menu driven program in C to implement stack using array . The operations on the stack are PUSH, POP, and DISPLAY.*/

#include<stdio.h>
#include<conio.h>

#define SIZE 10

void push(int[],int*,int);
int pop(int[],int*);
void display(int[],int);


void main()
{
	int value, choice;
	int stack[SIZE],top=-1;
	printf("****Stack operations using Array****");  
    printf("\n----------------------------------------------");  
	while(1)
	{
    	printf("\n1. Push\n2. Pop\n3. Display\n0. Exit");
    	printf("\nEnter: ");
   		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the value to be insert: ");
					scanf("%d",&value);
					push(stack,&top,value);
		 		break;
	 		case 2: pop(stack,&top);
				break;
	 		case 3: display(stack,top);
				break;
	 		case 0: exit(0);
	 		
			default: printf("\nWrong selection!!!");
      }
   }
}
void push(int stack[],int* top,int value)
{
	if(*top == SIZE-1)
    	printf("\nStack is Full!!! Insertion is not possible!!!");
	else
   	{
    	(*top)++;
		stack[*top] = value;
		printf("\nInsertion success!!!");
  	}
}
int pop(int stack[],int* top)
{
	int m;
	if(*top == -1)
    {
		printf("\n U N D E R F L O W");
    	return NULL;
    }
	else
	{
    	printf("\nDeleted : %d", m=stack[*top]);
		(*top)--;
		return m;
   	}
}
void display(int stack[],int top)
{
	int i;
	if(top == -1)
    	printf("\nStack is Empty!!!");
	else
    {
		printf("\nStack elements are:\n");
		for(i=0;i<=top;i++)
		printf("%d\n",stack[i]);
	}
}
