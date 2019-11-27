#include <stdio.h>
int count;
void hanoi(int n, char a, char b, char c);
int main(void)
{
	int n;
	char a = 'A', b = 'B', c = 'C';
	printf("�����뺺ŵ������\n");
	scanf("%d", &n);
	hanoi(n, a, b, c);
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("��%d���ƶ���%c->%c\n", ++count, a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("��%d���ƶ���%c->%c\n", ++count, a, c);
		hanoi(n - 1, b, a, c);
	}
	return 0;
}