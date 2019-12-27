#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, ii, num, n, sum;
	int arr[2000] = { 0 }, hw[2000] = { 0 };
	scanf("%d %d", &a, &b);
	//	voluation
	num = a;
	i = 0;
	ii = 0;
	for (int m = a; m <= b; m++)
	{
		arr[i] = num;
		num++;
		i++;
	}
	// find
	for (i = 0; i < b - a + 1; i++)
	{
		int temp;
		temp = arr[i];
		sum = 0;
		while (temp)
		{
			sum = sum * 10 + temp % 10;
			temp = temp / 10;
		}	//hw
		if (sum == arr[i])
		{
			n = 0;
			for (int m = 2; m < sqrt(arr[i]); m++)
			{
				if (arr[i] % m == 0)
					n++;
			}
			if (n == 0)
			{
				hw[ii] = arr[i];
				ii++;
			}
		}
	}
	for (i = 0; i < ii; i++)
	{
		printf("%d", hw[i]);
		printf("\n");
	}
}