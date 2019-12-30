#include<stdio.h>
int way(int l)
{
	int m = 0;
	while (l)
	{
		m = m + l % 10;
		l = l / 10;
	}
	l = m;
	return l;
}
int main()
{
	int a, b, n, m, l, k[10];
	char i[10][1000000] = { 0 };
	scanf("%d", &n);
	for (a = 0; a < n; a++)
		scanf("%s", &i[a]);
	for (a = 0; a < n; a++)
	{
		m = 0;
		for (b = 0; b < 1000000; b++)
		{
			if (i[a][b] != '\0')
				m = m + (i[a][b] - '0');
		}
		l = 0;
		for (b = 0; b < 1000000; b++)
		{
			if (m / 10)
			{
				l = l + m % 10;
				m = m / 10;
			}
		}
		l = l + m;
		while (l >= 10)
		{
			l = way(l);
		}
		k[a] = l;
	}
	for (a = 0; a < n; a++)
		printf("%d\n", k[a]);
	return 0;
}
