#include<stdio.h>
int main()
{
	int count,i=0,sn=0,ew=0,dir=100;
	char a[20];
	scanf("%s", &a);
	while (a[i] != '\0')
	{
		i++;
	}
	for (int ii = 0; ii < i; ii++)
	{
		if (a[ii] == '1')
		{
			dir = dir;
			if (dir % 4 == 0) ew=ew - 1;
			else if (dir % 4 == 1) sn = sn + 1;
			else if (dir % 4 == 2) ew = ew + 1;
			else if (dir % 4 == 3) sn = sn - 1;
		}
		else if (a[ii] == '2')
		{
			dir ++;
			if (dir % 4 == 0) ew = ew - 1;
			else if (dir % 4 == 1) sn = sn + 1;
			else if (dir % 4 == 2) ew = ew + 1;
			else if (dir % 4 == 3) sn = sn - 1;
		}
		else if (a[ii] == '3')
		{
			dir =dir-1;
			if (dir % 4 == 0) ew = ew - 1;
			else if (dir % 4 == 1) sn = sn + 1;
			else if (dir % 4 == 2) ew = ew + 1;
			else if (dir % 4 == 3) sn = sn - 1;
		}
	}
	printf("%d,", i);
	if (ew > 0) printf("e");
	if (sn > 0) printf("n");
	if (sn < 0) printf("s");
	if (ew < 0) printf("w");
}