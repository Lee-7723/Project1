#include<stdio.h>
int main()
{
	int count, num[5], i, ii;
	char phy[5][11];
	scanf("%d", &count);
	for (i = 0; i < count; i++)
		scanf("%s", phy[i]);
	for (i = 0; i < count; i++)
		scanf("%d", &num[i]);
	ii = 0;
	for (i = 0; i < count - 1; i++)
	{
		ii = num[i];
		printf("%s ", phy[ii]);
	}
	i = count - 1;
	ii = num[i];
	printf("%s\n", phy[ii]);
}