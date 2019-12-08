#include<stdio.h>
#include<math.h>
int main()
{
	char tst[101];
	unsigned rst = 0;
	int a=0;
	scanf("%s", tst);
	while(a>-1)
	{
		if (tst[a] == '\0')break;
		a++;
	}
	for (int i = 0; i < 101; i++)
	{
		if (tst[i] == '\0')break;
		rst = rst + (tst[i]-'0') * pow(2, a-1);
		a--;
	}
	printf("%ld", rst);
}