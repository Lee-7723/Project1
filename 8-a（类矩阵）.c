#include<stdio.h>
int main()
{
	int grp, xn[10][11], sumr[10] = { 0 }, suml[10] = {0};//grp���м��У�xn����Ԫ�أ�sumr��֮�ߣ�suml��֮��
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)//��������
	{
		for (int ii = 0; ii < grp;ii++)scanf("%d", &xn[i][ii]);
	}
	for (int i = 0; i < grp; i++)
	{
		for (int ii = 0; ii < grp;ii++)sumr[i] = sumr[i] + xn[i][ii];
	}
	for (int i = 0; i < grp; i++)
	{
		for (int ii = 0; ii < grp; ii++)suml[i] = suml[i] + xn[ii][i];
	}
	for (int i = 0; i < grp; i++)//output
	{
		for (int ii = 0; ii < grp; ii++)printf("%5d ", xn[i][ii]);
		printf("%5d\n", sumr[i]);
	}
	for (int i = 0; i < grp - 1; i++)printf("%5d ", suml[i]);
	printf("%5d", suml[grp - 1]);
}