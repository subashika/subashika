#include<stdio.h>
int main() 
{
	float km, m;
	printf("Enter distance in km: "); scanf("%f", & km);
	m=km*1000;
	printf("Meters = %.2f\n", m);
	return 0;
}
