/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-5 			Date: 18-9-2020
 Q1. Write a menu driven program in C which will perform the following operations on Linked List
	i) add a node at the end of the list(for empty list it will be first node of the list)
	ii) no. of nodes present in the list
	iii) add a new node at the beginning of the list
	iv) add a new node after the specified no. of nodes( e.g. add node after say 5th node)
	v) display the contents of the list*/
#include <stdlib.h>
#include <stdio.h>

typedef struct linkedList
{
	int data;
	struct linkedList *link;	
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
	temp->link=NULL;
	if(*head==NULL)									//empty list
	{
		*head=temp;
	}
	else											//inserting at last
	{
		ptr=*head;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		
		ptr->link=temp;
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
	temp->link=*head;
	*head=temp;
	
	return temp;
}

size_t count(node* head)							//counts the total number of elements
{
	node *ptr;
	size_t c;
	
	if(head==NULL)									//empty list
		return 0;
	else											//counting
	{
		for(ptr=head,c=1;ptr->link!=NULL;ptr=ptr->link,++c);
		return c;
	}
}

node* insertAfter(node** head,int data,size_t count)	//insert after count number of nodes & returnes address of new node
{
	node *ptr,*temp;
	size_t c;
	
	if(!(temp=(node*)malloc(sizeof(node))))			//no memory
	{
		printf(" OUT OF MEMORY ");
		return NULL;
	}
	
	temp->data=data;
	if(*head==NULL || count==0)									//empty list
	{
		temp->link=*head;
		*head=temp;
	}
	else
	{
		ptr=*head;
		c=1;
		while(ptr->link!=NULL && c<count)						//finding the position
		{
			ptr=ptr->link;
			++c;
		}
		
		temp->link=ptr->link;
		ptr->link=temp;
	}
	
	return temp;
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
	for(ptr=head;ptr!=NULL;ptr=ptr->link)
		printf(" %d",ptr->data);	
}

int main()
{
	node* head=NULL;
	int c,num,pos;
	
	printf("====================L I N K E D   L I S T============================");
	while(1)
	{
		printf("\n1. Insert First\n2. Insert Last\n3. Insert After\n4. Count\n5. Display\n0. Exit\n\nEnter: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter a number: ");
				scanf("%d",&num);
				insertFirst(&head,num);
			break;
			case 2:
				printf("Enter a number: ");
				scanf("%d",&num);
				insertLast(&head,num);
			break;
			case 3:
				printf("Enter a number: ");
				scanf("%d",&num);
				printf("Insert it after ");
				scanf("%d",&pos);
				insertAfter(&head,num,(size_t)pos);
			break;
			case 4:
				num=(int)count(head);
				printf(" Total number of element: %d ",num);
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
