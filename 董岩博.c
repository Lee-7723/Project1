#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g = 0, h, m, n = 0, i[1200], j[6],E;
	scanf("%d %d", &a, &b);
	for (e = a; e <= b; e++)
	{
		E = e;
		for (d = 0; E!=0; d++)
		{

			j[d] = E % 10;
			E = E / 10;
			if (E == 0)
				break;
		}
		f = 0;
		for (c = 0; c < (d + 1) / 2; c++)
		{
			if (j[c] == j[d - c])
				f++;
		}
		if (c == f )
		{
			i[g] = e;
			g++;
		}
	}
	for (h = 0; h < g; h++)
	{
		for (m = 2; m < i[h] / 2; m++)
		{
			if (i[h] % m == 0)
				n++;
		}
		if (n == 0)
			printf("%d\n", i[h]);
		n = 0;
	}
	return 0;
}