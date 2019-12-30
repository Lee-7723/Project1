#include<stdio.h>
#include<string.h>
int main()
{
	int grp, sum=0;
	char tst[1000001];
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)
	{
		char temp[1000001];
		int a = 0;
		scanf("%s", tst);
		while (strlen(tst)!=1)
		{
			a = 0;
			for (int ii = 0; ii < strlen(tst); ii++)sum += tst[ii] - '0';
			for (int ii=0; ii < 1000001;ii++)tst[ii] = '0';
			for (int ii = 0; sum; ii++)
			{
				tst[ii] = sum % 10 + '0';
				sum = sum / 10;
				a = ii+1;
			}
			tst[a] = '\0';
			//for (int ii = 0; ; ii++)
			//{
			//	tst[ii] = temp[a - 1 - ii];
			//}
		}
		printf("%d\n", sum);
	}
	return 0;
}