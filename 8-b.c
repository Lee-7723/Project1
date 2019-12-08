#include<stdio.h>
int main()
{
	int grp, no, rst;
	char ch[100][21];
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)
	{
		scanf("%d", &no);
		scanf("%s", ch[no]);
	}
	scanf("%d", &rst);
	printf("%s", ch[rst]);
}