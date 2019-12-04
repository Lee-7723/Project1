/*#include<stdio.h>
#include<string.h> 
int main()
{
	int a, i, m, n;	
	char str[10], str1[10] = "triangle", str2[10] = "diamond";
	scanf("%s %d", &str, &a);
	if (strcmp(str, str1) == 0)
	{
		for (i = 1; i <= (a + 1) / 2; i++)
		{
			for (m = 1; m <= 2*i-1; m = m + 1)
				printf("*");
			printf("\n");
		}
		for (i = 1; i <= a / 2; i++)
		{
			for (m =a - 2*i; m >= 1; m = m - 1)
				printf("*");
			printf("\n");
		}
	}
	if (strcmp(str, str2) == 0)//ling xing
	{
		for (i = 1; i <= (a + 1) / 2; i++)//i 用于记录上半菱形第几行
		{
			for (m = a/2 - i+1; m > 0; m--)
				printf(" ");
			for (n = 1; n <= 2*i-1; n++)
				printf("*");
			printf("\n"); 
		}
		for (i = 1; i <= a / 2; i++)//i记录下半菱形开始的第几行
		{
			for (m = 1; m <= i; m++)
				printf(" ");
			for (n = a - 2*i; n >= 1; n--)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}*/


#include<stdio.h>
#include<string.h> 
int main()
{
	int a, i, m, n;
	char str[10], str1[10] = "triangle", str2[10] = "diamond";
	scanf("%s %d", &str, &a);
	if (strcmp(str, str1) == 0)
	{
		for (i = 1; i <= (a + 1) / 2; i++)
		{
			for (m = 1; m <= 2 * i - 1; m ++ /*=m + 2*/)
				printf("*");
			printf("\n");
		}
		if (a % 2 != 0)
		{
			for (i = 1; i <= a / 2; i++)//for (i = 1; i <= a - 2; i = i + 2)
			{
				for (m = a - 2 * i; m >= 1; m = m - 1)//for (m = a - 2; m >= i; m = m - 2)
					printf("*");
				printf("\n");
			}
		}
		else//此处添加了if else来解决奇偶问题
		{
			for (i = 1; i <= a / 2; i++)//for (i = 1; i <= a - 2; i = i + 2)
			{
				for (m = a - 2 * i+1; m >= 1; m = m - 1)//for (m = a - 2; m >= i; m = m - 2)
					printf("*");
				printf("\n");
			}
		}
	}
	if (strcmp(str, str2) == 0)
	{
		for (i = 1; i <= (a + 1) / 2; i++)
		{
			for (m = a / 2 - i + 1; m > 0; m--)//for (m = (a - 1) / 2; m >= i; m--)
				printf(" ");
			for (n = 1; n <= 2 * i - 1; n++)
				printf("*");
			printf("\n");
		}
		if (a % 2 != 0)
		{
			for (i = 1; i <= (a /*- 1*/) / 2; i++)
			{
				for (m = 1; m <= i; m++)
					printf(" ");
				for (n = a - 2 * i; n >= 1; n--)
					printf("*");
				printf("\n");
			}
		}
		else//此处添加了if else来解决奇偶问题
		{
			for (i = 1; i <= (a /*- 1*/) / 2; i++)
			{
				for (m = 1; m <= i; m++)
					printf(" ");
				for (n = a - 2 * i+1; n >= 1; n--)
					printf("*");
				printf("\n");
			}
		}
	}
	return 0;
}