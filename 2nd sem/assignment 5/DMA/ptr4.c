#include<stdio.h>
typedef struct
{
	char name[20];
	int roll;
	int age;		
}student;
void InputStudent(student *a)
{
	printf("Enter student's name:");
	fflush(stdin);
	gets(a->name);
	printf("Enter student's roll:");
	scanf("%d",&a->roll);
	printf("Enter student's age:");
	scanf("%d",&a->age);
}
void PrintStudent(student *a)
{
	printf("Student details:\n----------------------------------------------\n");
	printf("Name: %s\nAge: %d\nRoll: %d",a->name,a->age,a->roll);
	printf("\n----------------------------------------------\n");
}
void main()
{
	student *stu;
	int n,i;
	printf("Enter the no. of student:");
	scanf("%d",&n);
	stu=(student*)calloc(n,sizeof(student));
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d details:\n",i+1);
		InputStudent(&stu[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d details\n",i+1);
		PrintStudent(&stu[i]);
	}
}
