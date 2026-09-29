#include<stdio.h>
int main()
{
	int isRaining;
	printf("Is it raining? (1 for yes, 0 for no): "); scanf("%d", &isRaining);
	if (!isRaining)
	printf("You can go outside\n");
	else
	printf("You should stay inside\n");
	return 0;
}
