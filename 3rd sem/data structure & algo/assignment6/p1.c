/*Name:- Mayukh Barman Ray
 Roll No.:-04   ,  CSE  , 2nd Year 
 Assignment-6 			Date: 24-9-2020
 1. Write a menu driven program in C which will perform the following operations on Singly Linked List.
i) create a linked list
ii) delete an element at the front
iii) delete an element at the end
iv) search for the key element
v) delete an element after the key element
vi) delete an element before the key element
vii) display the contents of the list*/
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

int deleteFront(node** head)
{
	node* ptr;
	int data;
	if(*head==NULL)
	{
		printf(" U N D E R F L O W ");
		return -1;
	}
	
	ptr=*head;
	*head=(*head)->link;
	
	data=ptr->data;
	free(ptr);
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
	if((*head)->link==NULL)								//single element
		*head=NULL;
	else												//multiple element
	{
		ptr=*head;
		while(ptr->link->link!=NULL)
			ptr=ptr->link;
		last=ptr->link;
		ptr->link=NULL;
	}
	data=last->data;
	free(last);
	return data;
}

node* search(node* head,int key)
{
	node *ptr,*res=NULL;
	
	if(head!=NULL)
	{
		ptr=head;
		while(ptr!=NULL)
		{	
			if(ptr->data==key)
			{
				res=ptr;
				break;
			}
			ptr=ptr->link;
		}
	}
	
	return res;
}

int deleteAfter(node* head,int key)
{
	node *ptr,*loc;
	int data;
	
	loc=search(head,key);
	if(loc==NULL)										
	{
		printf(" NOT FOUND ");
		return -1;
	}
	if(loc->link==NULL)
	{
		printf(" UNSUCCESSFUL ");
		return -1;
	}
	
	ptr=loc->link;
	loc->link=ptr->link;
	
	data=ptr->data;
	free(ptr);
	return data;
}

int deleteBefore(node** head,int key)
{
	node *ptr,*loc,*old;
	int data;
	
	loc=search(*head,key);
	if(loc==NULL)
	{
		printf(" NOT FOUND ");
		return -1;
	}
	if(*head==loc)										
	{
		printf(" UNSUCCESSFUL ");
		return -1;
	}
	
	if((*head)->link==loc)								//delete if first
	{
		old=*head;
		*head=loc;		
	}
	else												//find and delete
	{		
		ptr=*head;
		while(ptr->link->link!=loc)
			ptr=ptr->link;
		old=ptr->link;
		ptr->link=old->link;
	}
	
	data=old->data;
	free(old);
	return data;
}

int main()
{
	node* head=NULL;
	int c,num,pos;
	
	printf("====================L I N K E D   L I S T============================");
	while(1)
	{
		printf("\n1. Insert First\n2. Insert Last\n3. Insert After\n4. Delete Front\n5. Delete Last\n6. Delete after\n7. Delete before\
		\n8. Count\n9. Display\n10. Search\n0. Exit\n\nEnter: ");
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
				deleteFront(&head);
			break;
			case 5:
				deleteLast(&head);
			break;
			case 6:
				printf("Delete after(key): ");
				scanf("%d",&pos);
				deleteAfter(head,pos);
			break;
			case 7:
				printf("Delete before(key): ");
				scanf("%d",&pos);
				deleteBefore(&head,pos);
			break;
			case 8:
				num=(int)count(head);
				printf(" Total number of element: %d ",num);
			break;
			case 9:
				display(head);
			break;
			case 10:
				printf("Search key: ");
				scanf("%d",&pos);
				if(search(head,pos))
					printf(" Match Found ");
				else
					printf(" Match Not Found ");
				break;
			case 0:
				exit(0);
			default:
				printf(" Wrong Input ");
		}
	}
	
	return 0;
}
