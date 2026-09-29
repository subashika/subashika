#include<stdio.h>
int main()
{
	float h, minutes;
	printf("Enter hours: "); scanf("%f", &h);
	minutes= h * 60;
	printf("Minutes = %.2f\n", minutes);
	return 0;
}
