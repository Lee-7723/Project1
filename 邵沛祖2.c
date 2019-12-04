//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	double m = fabs(a - b);
//	double n = fabs(b - c);
//	double f = fabs(m - n);
//	if (f <=1e-6)
//		printf("yes\n");
//	else printf("no\n");
//	return 0;
//}
#include<stdio.h>
int main()
{
	float a, b, c, m, n;
	scanf("%f %f %f", &a, &b, &c);
	if (a > b)
		m = a - b;
	else m = b - a;
	if (b > c)
		n = b - c;
	else n = c - b;
	if(m>n)
	{
		if (m - n <= 1e-6)
			printf("yes\n");
		else printf("no\n");
	}
	else
	{
		if (n - m <= 1e-6)
			printf("yes\n");
		else printf("no\n");
	}
	return 0;
}