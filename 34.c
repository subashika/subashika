#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers");
	scanf("%f %f", &a, &b);
	if(b==0)
	printf("cannot divide by zero\n");
	else
	printf("Quotient = %.2f\n",a/b);
	return 0;
}
