#include<stdio.h>
int main()
{
	int a, i, ii, prt[10][10] = { 0 };
	int num = 1;
	scanf("%d", &a);//a���м���
	for (int j = 0; j < (a + 1) / 2; j++)//��Ȧ
	{
		for (i = 0; i < a - 2 * j; i++)//ÿȦ������
		{
			prt[j][j + i] = num;
			num++;
		}
		for (i = 0; i < a - 2 * j-1; i++)//ÿȦ������
		{
			prt[j+1 + i][a - j-1] = num;
			num++;
		}
		for (i = 0; i < a - 2 * j - 1; i++)//ÿȦ������
		{
			prt[a - 1 - j][a - j - 2 - i] = num;
			num++;
		}
		for (i = 0; i < a - 2 * j - 2; i++)//ÿȦ������
		{
			prt[a - j-2 - i][j] = num;
				num++;
		}
	}
	for (i = 0; i < a; i++)//�����
	{
		for (ii = 0; ii < a; ii++)
		{
			printf("%2d", prt[i][ii]);
			if(ii<a-1)printf(" ");
		}
			printf("\n");
	}
}
