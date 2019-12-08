#include<stdio.h>
int main()
{
	int grp, xn[10][11], sumr[10] = { 0 }, suml[10] = {0};//grp几行几列，xn矩阵元素，sumr行之者，suml列之和
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)//输入数据
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