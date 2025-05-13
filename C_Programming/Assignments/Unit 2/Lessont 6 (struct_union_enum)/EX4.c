#include "stdio.h"

struct Sstudent {
	char name[10];
	unsigned int  roll;
	float  marks;
}student[10];

void main()
{
	int i;
	for (i=0;i<10;i++){
	printf("Enter information of Student\n");
	printf("Enter student name : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",student[i].name);
	printf("Enter roll number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student[i].roll);
	printf("Enter Marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&student[i].marks);
	}

	for (i=0;i<10;i++){
	printf("Displaying information of student\n");
	printf("name: %s\n",student[i].name);
	printf("roll: %d\n",student[i].roll);
	printf("marks: %.2f\n\n",student[i].marks);
	}
}
