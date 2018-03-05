/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Structure implementation
*/
#include <stdio.h>
#include <stdlib.h>
long int get_roll_no();
char *get_name();
double *get_marks();

struct student
{
	long int roll_no;
	char name[20];
	double marks[5];
};

void main()
{
	int i, j, k, num_of_students = 1, num_of_subjects = 5;
	double average[num_of_subjects];
	
	struct student info[num_of_students];

	for(i = 0; i < num_of_students; i++)
	{
		info[i].roll_no = get_roll_no();
		
		char *name = get_name();
		for(j = 0; j < 15; j++)
		{
			info[i].name[j] = name[j];
		}
		
		double *mark = get_marks();
		for(j = 0; j < num_of_subjects; j++)
		{
			info[i].marks[j] = mark[j];
		}
	}
	
	for(i = 0; i < num_of_subjects; i++)
	{
		average[i] = 0;
	}
	
	for(i = 0; i < num_of_subjects; i++)
	{
		for(j = 0; j < num_of_students; j++)
		{
			average[i] += info[j].marks[i];	
		}
		average[i] /= num_of_students;
	}
	
	for(i = 0; i < num_of_subjects; i++)
	{
		printf("\nAverage of subject %d is %lf", (i + 1), average[i]);
	}
	printf("\n");
}

long int get_roll_no()
{
	long int roll;
	printf("\nEnter roll no - ");
	scanf("%ld", &roll);
	
	return roll;
}

char *get_name()
{
	getchar();
	printf("Enter name - ");
	char name[20];
	fgets(name, 15, stdin);
	
	return name;
}

double *get_marks()
{
	int i;
	double marks[5];
	for(i = 0; i < 5; i++)
	{
		printf("\nEnter marks in subject %d - ", (i + 1));
		scanf(" %lf", &marks[i]);
	}
	
	return marks;
}

