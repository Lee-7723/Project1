#include<stdio.h>
int main()
{
	char c;
	int n;
	long long m;
	float a;
	double b;
	scanf("%c", &c);
	scanf("%d", &n);
	scanf("%lld", &m);
	scanf("%f", &a);
	scanf("%lf", &b);
	printf("Size of '%c' is %d .\n", c, sizeof(c));
	printf("Size of %d is %d .\n", n, sizeof(n));
	printf("Size of %lld is %d .\n", m, sizeof(m));
	printf("Size of %.3f is %d .\n", a, sizeof(a));
	printf("Size of %.3lf is %d .\n", b, sizeof(b));
	return 0;
}