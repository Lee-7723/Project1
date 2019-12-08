#include<stdio.h>
int main()
{
	int a[5] = {0,1,2,3,4},b[5];
	char str[5][10];
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		if(i!=n-1)
		printf("%s ", str[b[i]]);
		else
			printf("%s\n", str[b[i]]);
	}
	return 0;
}