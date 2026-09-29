#include<stdio.h>
int main()
{
	float r, area, circumference;
	const float Pi= 3.14159;
	printf("Enter radius: "); scanf("%f", &r);
	area = Pi * r * r;
	circumference = 2 * Pi * r;
	printf("Area = %.2f\n", area);
	printf("Circumference = %.2f\n", circumference);
	return 0;
}
