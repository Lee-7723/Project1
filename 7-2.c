#include<stdio.h>
int main()
{
	char tst[6];
	int i, ii=0,iii=0;
	scanf("%s", tst);//input test numbers
	if (tst[4] >= '0' && tst[4] <= '9') //�ж����һλ�Ƿ�Ϊ����
	{
		for (i = 0; i < 5;i++)//��������м�����ĸ�ͼ�������
		{
			if (tst[i] >= 'a' && tst[i] <= 'z') tst[i] = tst[i] - 32;
			if ((tst[i] >= 'A' && tst[i] < 'I')|| (tst[i] > 'I' && tst[i] < 'O')|| (tst[i] > 'O' && tst[i] <= 'Z')) iii++;
			if (tst[i] >= '0' && tst[i] <= '9') ii++;
		}
		if (ii == 3&&iii==2) printf("yes:%s", tst);
		else printf("no.");
	}
	else printf("no.");
}