#include<stdio.h>
int main()
{
	float m1, m2, m3 ,m4, m5, total, average;
	printf("Enter marks 1: "); scanf("%f", &m1);
	printf("Enter marks 2: "); scanf("%f", &m2);
	printf("Enter marks 3: "); scanf("%f", &m3);
	printf("Enter marks 4: "); scanf("%f", &m4);
	printf("Enter marks 5: "); scanf("%f", &m5);
	total = m1 + m2 + m3+ m4 + m5;
	average = total / 5;
	printf("Total = %,2f\n", total);
	printf("Average = %.2f\n", average);
	return 0;		
}
