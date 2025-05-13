#include "stdio.h"

struct Sstudent {
	char name[10];
	unsigned int  roll;
	float  marks;
}student1;

void main()
{
	printf("Enter information of Student\n");
	printf("Enter student name : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",student1.name);
	printf("Enter roll number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student1.roll);
	printf("Enter Marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&student1.marks);
	fflush(stdin);fflush(stdout);

	printf("Displaying information of student\n");
	printf("name: %s\n",student1.name);
	printf("roll: %d\n",student1.roll);
	printf("marks: %.2f\n",student1.marks);

}
