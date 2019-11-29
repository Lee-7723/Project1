#include<stdio.h>
int main()
{
	int a, b,tst,prt[10000],c,ery[5],i_=0,iii=0;//a，b是临界值，prt输出值，c位数，ery每一位数，i_第几位
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i - 10 < 0) c = 1;
		else if (i - 100 < 0) c = 2;
		else if (i - 1000 < 0) c = 3;
		else if (i - 10000 < 0) c = 4;
		else if (i - 100000 < 0) c = 5;
		while (i_<c)
		{
			ery[i_] = i % 10;
			i = i / 10;
			i_++;
		}
		for(int ii = 0; ii < c / 2; ii++)
		{
			if (ery[ii] == ery[c - 1 - ii])
			{
				prt[iii] = i;
				iii++;
			}
		}
	}
	printf("&d", );
}