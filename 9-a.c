#include<stdio.h>
int main()
{
	char tst[101];
	int tst_[101] , rst[10000], srt[10000], a = 0,b=0;
	scanf("%s", tst);
	//for (int i = 0; i < 10000; i++)rst[i] = 2;
	//for (int i = 0; i < 101; i++)tst_[i] = 0;
	for (int i = 0; tst[i] != '\0'; i++)tst_[i] = tst[i] - '0';
	for (int i = 0; i < 10000; i++)//Ҫ����i�γ�2ȡ���������iλ��������
	{
		for (int ii = 1; tst[ii] != '\0'; ii++)//ʮ������λ
		{
			tst_[ii] = tst_[ii] + (tst_[ii-1] % 2) * 10;
		}
		for (int ii = 0; tst[ii] != '\0'; ii++)//ʮ���Ƴ��Զ���rst��¼ȡ��
		{
			tst_[ii] = tst_[ii] / 2;
			rst[i + 1] = tst_[ii] % 2;
		}
		for (int ii = 0; tst[ii] != '\0'; ii++)rst[0] = (tst[ii] - '0') % 2;//���������һλ
		for (int ii = 0; ii < 101; ii++)
		{
			if (tst_[ii] != 0&& tst_[ii] != -858993460)b++;
			if(tst_[ii] == 1)if (tst_[ii] == 1)a++;
		}
		if (a == 1&&b==1)break;
		a = 0;
		b = 0;
	}
	for (int i = 0; i < 10000; i++)if (rst[9999 - i] != -858993460)
	{
		printf("%d", rst[9999 - i]);
		//srt[i] = rst[9999 - i - 1];
	}
	//for (int i = 1; i < 10000; i++)if (srt[i] != -858993460)printf("%d", srt[i]);
}