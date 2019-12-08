#include <stdio.h>
#include<math.h>
int main()
{
	int grp, n[20];
	double x[20],rst;
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)		scanf("%d %lf", &n[i], &x[i]);
	for (int i = 0; i < grp; i++)
	{
		rst = sqrt(1+x[i]);
		for (int ii = 2; ii <= n[i]; ii++)rst = sqrt(ii + rst);
		printf("%.3lf\n", rst);
	}
}