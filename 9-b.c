#include<stdio.h>
int main()
{
	int soldier, tool;
	long long toen[10000] = { 0 }, tstmin = 1, tst = 1, tstmax = 2000000;
	scanf("%d %d", &tool, &soldier);
	for (int i = 0; i < tool; i++)scanf("%lld", &toen[i]);
	while (tst > -1)
	{
		tst = (tstmin + tstmax) / 2;
		int sum = 0;
		for (int i = 0; i < tool; i++)sum = sum + toen[i] / tst;
		
		if (sum >= soldier)//tst̫С�ˣ���Ҫ����
			tstmin = tst;
		else if (sum < soldier)//tst̫���ˣ���Ҫ��С
			tstmax = tst;
		if (tstmin == tstmax - 1/*sum < soldier*/)break;

	}
	printf("%lld", tstmin);
}