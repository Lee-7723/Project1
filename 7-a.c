#include<stdio.h>
int main()
{
	int a, i, ii, prt[10][10] = { 0 };
	int num = 1;
	scanf("%d", &a);//a几行几列
	for (int j = 0; j < (a + 1) / 2; j++)//几圈
	{
		for (i = 0; i < a - 2 * j; i++)//每圈最上行
		{
			prt[j][j + i] = num;
			num++;
		}
		for (i = 0; i < a - 2 * j-1; i++)//每圈最右列
		{
			prt[j+1 + i][a - j-1] = num;
			num++;
		}
		for (i = 0; i < a - 2 * j - 1; i++)//每圈最下行
		{
			prt[a - 1 - j][a - j - 2 - i] = num;
			num++;
		}
		for (i = 0; i < a - 2 * j - 2; i++)//每圈最左列
		{
			prt[a - j-2 - i][j] = num;
				num++;
		}
	}
	for (i = 0; i < a; i++)//输出用
	{
		for (ii = 0; ii < a; ii++)
		{
			printf("%2d", prt[i][ii]);
			if(ii<a-1)printf(" ");
		}
			printf("\n");
	}
}
