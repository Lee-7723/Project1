#include<stdio.h>
int main()
{
	int tst,sum=0;
	scanf("%d", &tst);
	for (int i = 1; i <= tst/2; i++)
	{
		sum = 0;
		for (int ii = i; sum < tst + 1; ii++)
		{
			sum = sum + ii;
			if (sum == tst)
			{
				printf("%d %d\n", i, ii);
				break;
			}
		}
	}
}