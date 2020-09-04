#include<stdio.h>
typedef struct
{
	char name[20];
	int roll;
	char stream[10];
	int year;		
}student;
void InputStudent(student *a)
{
	printf("Enter student's name:");
	fflush(stdin);
	gets(a->name);
	printf("Enter student's roll:");
	scanf("%d",&a->roll);
	printf("Enter student's stream:");
	fflush(stdin);
	scanf("%s",a->stream);
	printf("Enter student's year:");
	scanf("%d",&a->year);
}
void PrintStudent(student *a)
{
	printf("Student details:\n----------------------------------------------\n");
	printf("Name: %s\nyear: %d\nRoll: %d\nStream: %s",a->name,a->year,a->roll,a->stream);
	printf("\n----------------------------------------------\n");
}
void main()
{
	student stu;
	InputStudent(&stu);
	PrintStudent(&stu);
}

