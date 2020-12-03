/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-9 			Date: 11-11-2020
1. Write a menu driven program in C which will perform the following operations on Doubly Linked List.
i)     create a doubly linked list
ii)    insert a node at the beginning
iii)   insert a node at the end
iv)    display the list before and after the each operation*/

#include <stdlib.h>
#include <stdio.h>

typedef struct doublyLinkedList
{
	int data;
	struct doublyLlinkedList *prev;	
	struct doublyLlinkedList *next;	
}node;

node* insertLast(node** head,int data)				//insert at the end & returnes address of new node
{
	node *ptr,*temp;
	
	if(!(temp=(node*)malloc(sizeof(node))))			//no memory
	{
		printf(" OUT OF MEMORY ");
		return NULL;
	}
	
	temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;
	if(*head==NULL)									//empty list
	{
		*head=temp;
	}
	else											//inserting at last
	{
		ptr=*head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		
		ptr->next=temp;
		temp->prev=ptr;
	}
	
	return temp;
}

node* insertFirst(node** head,int data)				//insert at the starting & returnes address of new node
{
	node *temp;
	
	if(!(temp=(node*)malloc(sizeof(node))))			//no memory
	{
		printf(" OUT OF MEMORY ");
		return NULL;
	}
	
	temp->data=data;
	temp->next=*head;
	(*head)->prev=temp;
	*head=temp;
	
	return temp;
}

void createDList(node** head,int size)
{
	int i,num;
	printf("Enter %d number: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&num);
		insertLast(head,num);
	}
}

void display(node* head)										
{
	node* ptr;
	
	if(head==NULL)									//empty list
	{
		printf(" List is empty");
		return;
	}
	
	printf("\nList:");
	for(ptr=head;ptr!=NULL;ptr=ptr->next)
		printf(" %d",ptr->data);	
}

int main()
{
	node* head=NULL;
	int c,num,pos;
	
	printf("====================L I N K E D   L I S T============================");
	while(1)
	{
		printf("\n1. Create list\n2. Insert First\n3. Insert Last\n4. Display\n0. Exit");
		display(head);
		printf("\n\nEnter: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the size: ");
				scanf("%d",&num);
				createDList(&head,num);	
				display(head);
			break;
			case 2:
				printf("Enter a number: ");
				scanf("%d",&num);
				insertFirst(&head,num);
				display(head);
			break;
			case 3:
				printf("Enter a number: ");
				scanf("%d",&num);
				insertLast(&head,num);
				display(head);
			break;
			case 4:
				display(head);
			break;
			case 0:
				exit(0);
			default:
				printf(" Wrong Input ");
		}
	}
	
	return 0;
}
