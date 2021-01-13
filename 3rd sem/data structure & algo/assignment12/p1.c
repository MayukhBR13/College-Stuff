 /*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-12 			Date: 09-12-2020
1. Write a menu driven program in C which will perform the following operations on Circular Doubly Linked List
i)    create a circular doubly linked list
ii)    delete the first node
iii)   delete the last node
iv)   delete a node after a specific node
iv)   display the list before and after each operation*/

#include <stdlib.h>
#include <stdio.h>

typedef struct doublyLinkedList
{
	int data;
	struct doublyLinkedList *prev;	
	struct doublyLinkedList *next;	
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
		temp->next=*head;
		temp->prev=*head;
	}
	else											//inserting at last
	{
		temp->next=*head;
		temp->prev=(*head)->prev;					//linking temp to others
		
		temp->prev->next=temp;
		(*head)->prev=temp;						//linking others to temp							
	}
	
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

int deleteFirst(node** head)
{
	int f;
	node *ptr;
	if(*head==NULL)
	{
		printf("-- U N D E R F L O W --\n");
		return NULL;
	}
	
	ptr=*head;
	f=ptr->data;
	if(ptr->next==*head)
		*head=NULL;	
	else
	{
		*head=ptr->next;
		(*head)->prev=ptr->prev;
		ptr->prev->next=*head;
	}
	
	free(ptr);
	return f;
}

int deleteLast(node** head)
{
	int f;
	node *ptr;
	if(*head==NULL)
	{
		printf("-- U N D E R F L O W --\n");
		return NULL;
	}
	
	ptr=(*head)->prev;
	f=ptr->data;
	if((*head)->next==*head)
		*head=NULL;	
	else
	{
		(*head)->prev=ptr->prev;
		ptr->prev->next=*head;
	}
	
	free(ptr);
	return f;
}

int deleteAfter(node** head,int key)
{
	int f;
	node *ptr;
	if(*head==NULL)
	{
		printf("-- U N D E R F L O W --\n");
		return NULL;
	}
	
	ptr=*head;
	while(ptr->next!=*head && ptr->data!=key)
		ptr=ptr->next;
	
	if(ptr->data==key)														//match found
	{
		f=ptr->data;
		ptr=ptr->next;															
		
		if((*head)->next!=*head)
		{
			ptr->next->prev=ptr->prev;											//redirecting links
			ptr->prev->next=ptr->next;
			if(*head==ptr)												//reassign head if ptr->next is head node	
				*head=ptr->next;
		}
		else																	//only 1 element present
			*head=NULL;
	}
	else
	{
		printf("key not found");
		return NULL;
	}
		
	free(ptr);
	return f;
	
}

void display(node* head)										
{
	node* ptr;
	
	if(head==NULL)									//empty list
	{
		printf("\nList: empty");
		return;
	}
	
	printf("\nList:");
	printf(" %d",head->data);
	for(ptr=head->next;ptr!=head;ptr=ptr->next)
		printf(" %d",ptr->data);	
}

int main()
{
	node* head=NULL;
	int c,num,pos;
	
	printf("====================L I N K E D   L I S T============================");
	while(1)
	{
		printf("\n1. Create list\n2. Delete First\n3. Delete Last\n4. Delete After\n5. Display\n0. Exit");
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
				deleteFirst(&head);
				display(head);
			break;
			case 3:
				deleteLast(&head);
				display(head);
			break;
			case 4:
				printf("Enter the key: ");
				scanf("%d",&num);
				deleteAfter(&head,num);
				display(head);
			break;
			case 5:
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
