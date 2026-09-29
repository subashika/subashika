#include<stdio.h>
int main()
{
	int marks;
	char attendence;
	printf("Enter marks: "); scanf("%d", &marks);
	printf("Attendance above 75%% (y/n): "); scanf(" %c", &attendence);
	if (marks >=40 || attendence == 'y')
	printf("Eligible for exam\n");
	else
	printf("Not eligiable for exam\n");
	return 0;
}
