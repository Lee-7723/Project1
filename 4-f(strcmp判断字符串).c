#include<stdio.h>
int main()
{
	int a,i=1,ii=1,iii;
	char str[10],str1[10]="triangle";
	scanf("%s %d", &str, &a);
	if (strcmp(str, str1) == 0)
	{
		for (i = 1; i <= a / 2; i++)//�����ϰ�
		{
			for (ii = 1; ii <= 2 * i - 1; ii++) printf("*");
			printf("\n");
		}
		if (a % 2 != 0)
		{
			for (i = 0; i <= a / 2 + 1; i++)//�����°�
			{
				for (ii = 1; ii <= a - 2 * i; ii++) printf("*");
				printf("\n");
			}
		}
		else
		{
			for (i = 0; i <= a / 2 + 1; i++)//�����°�
			{
				for (ii = 1; ii <= a - 2 * i - 1; ii++) printf("*");
				printf("\n");
			}
		}
	}

	else
	{
		if (a % 2 != 0)
		{
			for (i = 1; i <= a / 2; i++)//�����ϰ�
			{
				for (iii = 0; iii < a / 2 - i + 1; iii++) printf(" ");
				for (ii = 1; ii <= 2 * i - 1; ii++) printf("*");
				printf("\n");
			}
		}
		else
		{
			for (i = 1; i <= a / 2; i++)//�����ϰ�
			{
				for (iii = 1; iii < a / 2 - i + 1; iii++) printf(" ");
				for (ii = 1; ii <= 2 * i - 1; ii++) printf("*");
				printf("\n");
			}
		}
		if (a % 2 != 0)
		{
			for (i = 0; i <= a / 2 + 1; i++)//�����°�
			{
				for (iii = 0; iii < i; iii++) printf(" ");
				for (ii = 1; ii <= a - 2 * i; ii++) printf("*");
				printf("\n");
			}
		}
		else
		{
			for (i = 0; i <= a / 2 + 1; i++)//�����°�
			{
				for (iii = 0; iii < i; iii++) printf(" ");
				for (ii = 1; ii <= a - 2 * i - 1; ii++) printf("*");
				printf("\n");
			}
		}
	}
	return 0;
}