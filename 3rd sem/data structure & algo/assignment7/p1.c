/*/*Name:- Mayukh Barman Ray
 Roll No.:-4   ,  CSE  , 2nd Year 
 Assignment-7 			Date: 1-10-2020
1. Write a menu driven program in C which will perform the following operations on Circular Linked List.
	i)    create a circular linked list
	ii)   insert a node at the beginning
	iii)  insert a node at the end
	iv)  delete a node at the front
	v)   delete a node at the end
	vi)  delete the circular list
	vii) display the list*/
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
		temp->link=*head;
	}
	else											//inserting at last
	{
		ptr=*head;
		while(ptr->link!=*head)
			ptr=ptr->link;
		
		ptr->link=temp;
		temp->link=*head;
	}
	
	return temp;
}

node* insertFirst(node** head,int data)				//insert at the starting & returnes address of new node
{
	node *temp,*ptr;
	
	if(!(temp=(node*)malloc(sizeof(node))))			//no memory
	{
		printf(" OUT OF MEMORY ");
		return NULL;
	}
	
	temp->data=data;
	if(*head==NULL)									//empty list
	{
		*head=temp;
		temp->link=*head;
	}
	else											//inserting at last
	{
		ptr=*head;
		while(ptr->link!=*head)
			ptr=ptr->link;
		
		ptr->link=temp;
		temp->link=*head;
		*head=temp;
	}	
	return temp;
}

void createList(node** head)
{
	node *ptr;
	int n,i,a;
	printf("Enter the no. of elements ");
	scanf("%d",&n);
	printf("\nEnter %d element: ",n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a);
		if(!insertLast(head,a))
			break;
	}
	display(*head);
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
	for(ptr=head;ptr->link!=head;ptr=ptr->link)
		printf(" %d",ptr->data);
	printf(" %d",ptr->data);	
}

int deleteFront(node** head)
{
	node* ptr,*last;
	int data;
	if(*head==NULL)
	{
		printf(" U N D E R F L O W ");
		return -1;
	}
	
	last=*head;
	if((*head)->link==*head)								//single element
		*head=NULL;
	else												//multiple element
	{
		ptr=(*head)->link;
		while(ptr->link!=*head)
			ptr=ptr->link;
		*head=(*head)->link;
		ptr->link=*head;
	}
	data=last->data;
	free(last);
	return data;
}

int deleteLast(node** head)
{
	node *ptr,*last;
	int data;
	if(*head==NULL)										//empty list
	{
		printf(" U N D E R F L O W ");
		return -1;
	}
	
	last=*head;
	if((*head)->link==*head)								//single element
		*head=NULL;
	else												//multiple element
	{
		ptr=*head;
		while(ptr->link->link!=*head)
			ptr=ptr->link;
		last=ptr->link;
		ptr->link=*head;
	}
	data=last->data;
	free(last);
	return data;
}

void deleteList(node** head)
{
	while(*head!=NULL)
		deleteLast(head);
}

int main()
{
	node* head=NULL;
	int c,num,pos;
	
	printf("====================L I N K E D   L I S T============================");
	while(1)
	{
		printf("\n1. Create List\n2. Insert First\n3. Insert Last\n4. Delete Front\n5. Delete Last\n6. Delete List\n7. Display\n0. Exit\n\nEnter: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				createList(&head);
			break;
			case 2:
				printf("Enter a number: ");
				scanf("%d",&num);
				insertFirst(&head,num);
			break;
			case 3:
				printf("Enter a number: ");
				scanf("%d",&num);
				insertLast(&head,num);
			break;
			case 4:
				deleteFront(&head);
			break;
			case 5:
				deleteLast(&head);
			break;
			case 6:
				deleteList(&head);
			break;
			case 7:
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
