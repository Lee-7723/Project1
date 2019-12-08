#include<stdio.h>
int SUM(int n)//递归算和
{
	int temp = n, sum = 0;
	while (temp)
	{
		sum += temp % 10;
		temp /= 10;
	}
	if (sum < 10)
		return sum;
	return SUM(sum);
}
int main()
{
	int grp, sum[10] = { 0 }, sum_[10];//grp组数，sum第一次求和
	char tst[1000000];
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)
	{
		scanf("%s", tst);
for (int ii = 0; ii < 10000000; ii++)
		{
			if (tst[ii] == '\0')break;
			sum[i] = sum[i] + tst[ii] - '0';
			sum_[i] = SUM(sum[i]);
		}
	}
	for (int i = 0; i < grp; i++)printf("%d\n", sum_[i]);
}