#include<stdio.h>
int main()
{
	float m, cm;
	printf("Enter length in meters: "); scanf("%f", &m);
	cm=m * 100;
	printf("Centimeters= %.2f\n", cm);
	return 0;
}
