/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-13 			Date: 30-12-2020
1. Write a menu driven program in C to implement stack using linked list. The operations on the stack are PUSH, POP, and DISPLAY.*/

#include <stdio.h>  
#include <stdlib.h>   

typedef struct node   
{  
	int val;  
	struct node *next;  
}node;  
 
void push(node**,int);  
int pop(node**);  
void display(node*);
  
void main ()  
{  
	node *head=NULL;  
    int choice=0,val;     
    printf("\n****Stack operations using linked list****");  
    printf("\n----------------------------------------------\n");  
    do 
    {  
        printf("\n1. Push\n2. Pop\n3. Display\n0. Exit");  
        printf("\n\nEnter: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
            	printf("Enter the value: ");  
        		scanf("%d",&val);  
                push(&head,val);  
                break;  
            }  
            case 2:  
            {  
                pop(&head);  
                break;  
            }  
            case 3:  
            {  
                display(head);  
                break;  
            }  
            case 0:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }
    }while(choice != 0) ;  
}  

void push(node** head,int val)  
{  
    node* ptr = (node*)malloc(sizeof(node));   
    if(ptr == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            *head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = *head;  
            *head=ptr;  
               
        }  
        printf("%d is pushed in the stack",val);  
          
    }  
}  
  
int pop(node** head)  
{  
    int item;  
    struct node *ptr;  
    if (*head == NULL)  
    {  
        printf("Underflow");  
        return NULL;
    }  
    else  
    {  
        item = (*head)->val;  
        ptr = *head;  
        (*head) = (*head)->next;  
        free(ptr);  
        printf("Item popped");  
        return item;  
    }  
}  
void display(node* head)  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}

