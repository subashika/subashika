#include<stdio.h>
int main()
{
	float f=3.14f;
	double d=3.14;
	printf("Float: %.10f (size: %zu bytes)\n", f, sizeof(f));
	printf("Double: %.10lf (size: %zu bytes)\n", d, sizeof(d));
	return 0;
}
