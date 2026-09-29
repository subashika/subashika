#include<stdio.h>
#include<math.h>
int main()
{
	float p, r, t, ci;
	printf("Enter principal: "); scanf("%f", &p);
	printf("Enter rate: "); scanf("%f", &t);
    printf("Enter time (years): "); scanf("%f", &t);
	ci = p * pow(1 + r / 100, t)-p;
	printf("Compound Interest= %.2f\n", ci);
	return 0;
}
