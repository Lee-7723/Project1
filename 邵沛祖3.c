
#include<stdio.h>
int main()
{
	long a, b, c, d, e, f, x;
	scanf("%ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f);
	x = (a + b) * c / d % (e - f);
	printf("%ld", x);
	return 0;
}