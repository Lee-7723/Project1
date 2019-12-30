#include<stdio.h>
int main()
{
	int num, add = 0, i, ii, sum = 0;
	char txt[10][1000001];
	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%s", txt[i]);
	for (i = 0; i < num; i++)
	{
		for (ii = 0; ii < 1000001; ii++)
		{
			if (txt[i][ii] == '\0')
				break;
			sum = sum + txt[i][ii] - '0';
		}
		while (sum)
		{
			add = add + sum % 10;
			sum = sum / 10;
		}
		if (add > 9)
		{
			add = add % 10 + add / 10;
		}
		printf("%d\n", add);
		sum = 0;
		add = 0;
	}
}