#include<stdio.h>
int main(void)
{
	int i=0;
	int j;
	int* p;
	p = &i;
	printf("%p\n", &(i));
	printf("%p\n", &j);
	printf("%p\n", p);
	printf("%d\n", *p);
	printf("%p\n", &(&(&(&p))));
	printf("%p", &*p);
}