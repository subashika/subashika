#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: "); scanf("%d", &n);
	if (n >= 10 && n <=50)
	printf("%d lies between 10 and 50\n", n);
	else
	printf("%d does not lies between 10 and 50\n", n);
	return 0;
}
