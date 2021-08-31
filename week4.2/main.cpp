#include <stdio.h>


int main()
{
	int a;
	printf("side = ");
	scanf_s("%d", &a);
	int i;
	for (i = 0; i < a; i++)
	{
		printf("%s", "*");
	}
	printf("\n");
	for (i = 0; i < a - 2; i++)
		printf("%s%*s\n", "*", a - 1, "*");
	for (i = 0; i < a; i++)
		printf("%s", "*");
	return 0;

}