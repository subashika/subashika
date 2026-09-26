#include<stdio.h>
int main()
{ 
    int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	if (b==0)
	printf("Cannot divide by zero\n");
	else
	printf("Remainder= %d\n", a % b);
	return 0;
}
