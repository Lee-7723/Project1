#include<stdio.h>
#include<math.h>
int main()
{
	char tst[101];
	int rst[50] = { 0 }, temp[100] = { 0 }, ad[100][50] = { 0 };//temp��˳�򴢴�tst����
	int a = 0, b = 0, i = 0;//a�Ƕ����Ƶ�λ��
	scanf("%s", tst);
	while (a > -1)
	{
		if (tst[a] == '\0')break;
		a++;
	}
	for (i = 0; i < a; i++)temp[i] = tst[a - i - 1] - '0';//temp��˳�򴢴�
	for (i = 0; i < 100; i++)ad[i][0] = 1;
	for (i = 0; i < 100; i++)//ad[i]�ֱ��Ӧ�����Ƶ�iλ��2��i�η���
	{
		if (temp[i] != 0)
		{
			for (int ii = 0; ii < i; ii++)//���λ������iλ����i��2
			{
				for (int iii = 0; iii < 50; iii++)//ÿһλ����2
				{
					ad[i][iii] = 2 * ad[i][iii];//ad[i][iii]Ϊ�����Ƶ�iλ��Ӧ��ʮ����iiiλ

				}
				for (int iii = 0; iii < 50; iii++)if (ad[i][iii] >= 10)//��λ
				{
					ad[i][iii + 1]= ad[i][iii + 1]+ ad[i][iii]/10;
					ad[i][iii] = ad[i][iii] % 10;
				}
			}
		}
	}
	for (i = 0; i < 50; i++)//�Ѷ�����ÿһλ��Ӧ�����Ӻ�
	{
		for (int ii = 0; ii < 100; ii++)
		{
			if (temp[ii] == 1)rst[i] = rst[i] + ad[ii][i];
			if (rst[i] >= 10)//��λ
			{
				rst[i + 1] = rst[i + 1] + rst[i]/10;
				rst[i] = rst[i] % 10;
			}
		}
	}
	while (rst[49 - b] == 0)//�����ӡ
	{
		b++;
	}
	for (b; b < 50; b++)printf("%d", rst[50 - 1 - b]);
}