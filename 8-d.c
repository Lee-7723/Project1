#include<stdio.h>
#include<math.h>
int main()
{
	char tst[101];
	int rst[50] = { 0 }, temp[100] = { 0 }, ad[100][50] = { 0 };//temp反顺序储存tst的数
	int a = 0, b = 0, i = 0;//a是二进制的位数
	scanf("%s", tst);
	while (a > -1)
	{
		if (tst[a] == '\0')break;
		a++;
	}
	for (i = 0; i < a; i++)temp[i] = tst[a - i - 1] - '0';//temp反顺序储存
	for (i = 0; i < 100; i++)ad[i][0] = 1;
	for (i = 0; i < 100; i++)//ad[i]分别对应二进制第i位（2的i次方）
	{
		if (temp[i] != 0)
		{
			for (int ii = 0; ii < i; ii++)//相对位数（第i位）乘i次2
			{
				for (int iii = 0; iii < 50; iii++)//每一位都乘2
				{
					ad[i][iii] = 2 * ad[i][iii];//ad[i][iii]为二进制第i位对应的十进制iii位

				}
				for (int iii = 0; iii < 50; iii++)if (ad[i][iii] >= 10)//进位
				{
					ad[i][iii + 1]= ad[i][iii + 1]+ ad[i][iii]/10;
					ad[i][iii] = ad[i][iii] % 10;
				}
			}
		}
	}
	for (i = 0; i < 50; i++)//把二进制每一位对应的数加和
	{
		for (int ii = 0; ii < 100; ii++)
		{
			if (temp[ii] == 1)rst[i] = rst[i] + ad[ii][i];
			if (rst[i] >= 10)//进位
			{
				rst[i + 1] = rst[i + 1] + rst[i]/10;
				rst[i] = rst[i] % 10;
			}
		}
	}
	while (rst[49 - b] == 0)//反向打印
	{
		b++;
	}
	for (b; b < 50; b++)printf("%d", rst[50 - 1 - b]);
}