#include<stdio.h>
int main()
{
	int a,i=1,ii=1;
	char b;
	scanf("%c %d", &b, &a);
	for (i = 1; i <= a / 2;i++)
	{
		for (ii = 1; ii <= 2 * i - 1; ii++) printf("*");
		printf("\n");
	}
	for (i = 1; i <= a / 2; i++)
	{
		for (ii = 1; ii <= a - 2 * i + 1; ii++) printf("*");
		printf("\n");
	}
	return 0;
}