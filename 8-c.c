#include<stdio.h>
int main()
{
	int grp, rst[10][20] = {0};
	char tst[10][21];
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)scanf("%s", tst[i]);
	for (int i = 0; i < grp; i++)//此循环同时管理判断数字和输出
	{
		int ii = 0;
		while (tst[i][ii] != '\0')//把tst的每一位对应数字都放进rst里
		{
			if (tst[i][ii] == 'B' || tst[i][ii] == 'F' || tst[i][ii] == 'P' || tst[i][ii] == 'V')rst[i][ii] = 1;
			else if (tst[i][ii] == 'C' || tst[i][ii] == 'G' || tst[i][ii] == 'J' || tst[i][ii] == 'K' || tst[i][ii] == 'Q' || tst[i][ii] == 'S' || tst[i][ii] == 'X' || tst[i][ii] == 'Z')rst[i][ii] = 2;
			else if (tst[i][ii] == 'D' || tst[i][ii] == 'T')rst[i][ii] = 3;
			else if (tst[i][ii] == 'L')rst[i][ii] = 4;
			else if (tst[i][ii] == 'M' || tst[i][ii] == 'N')rst[i][ii] = 5;
			else if (tst[i][ii] == 'R')rst[i][ii] = 6;
			ii++;
		}
		for (ii = 0; ii < 20; ii++)//筛选并输出rst
		{
			if (rst[i][ii] == 0 || rst[i][ii] == rst[i][ii + 1])printf("");
			else printf("%d", rst[i][ii]);
		}
		printf("\n");//换行
	}
}