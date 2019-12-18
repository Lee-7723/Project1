#include<stdio.h>
int main()
{
	int soldier, tool,tst=0;
	long long toen[10000] = {0};
	scanf("%d %d", &tool, &soldier);
	for (int i = 0; i < tool; i++)scanf("%lld", &toen[i]);
	while (tst>-1)
	{
		int sum = 0;
		tst++;
		for (int i = 0; i < tool; i++)sum = sum + toen[i] / tst;
		if (sum < soldier)break;
	}
	printf("%d", tst - 1);
}