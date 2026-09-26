#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three sides: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("Perimeter= %.2f\n", a + b + c);
	return 0;
}
