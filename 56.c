#include<stdio.h>
int main()
{
	int age;
	char hasID;
	printf("Enter your age: "); scanf("%d", &age);
	printf("Do you have ID (y/n): "); scanf(" %c", &hasID);
	if(age>= 18 && hasID == 'y')
	printf("You are allowed to vote\n");
	else
	printf("You are not allowed to vote\n");
	return 0;
}
