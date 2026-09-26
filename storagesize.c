#include<stdio.h>
int main()
{
	printf("Type\t\tSize (bytes)\n");
	printf("char\t\t%zu\n",sizeof(char));
	printf("short\t\t%zu\n", sizeof(short));
	printf("int\t\t%zu\n", sizeof(int));
	printf("long\t\t%zu\n", sizeof(long));
	printf("long long\t\t%zu\n", sizeof(long long));
	printf("float\t\t%zu\n", sizeof(float));
	printf("double\t\t%zu\n", sizeof(double));
	printf("long double\t\t%zu\n",sizeof(long double));
	return 0;
}
