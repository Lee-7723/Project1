#include<stdio.h>
int main()
{
	int a, b, i,temp,iii=0,j,n=0;//a b�ٽ�ֵ��i�ǲ��������ÿ������temp��ÿһλ����ʱ�ã�iii��¼��������λ����hw[n]
	int hw[2000] = { 0 }, ery[6] = { 0 }, zs[2000] = { 0 };
	scanf("%d %d", &a, &b);//����߽�
	for (i = a; i <= b; i++)//����������浽hw
	{
		int k=0;
		temp = i;
		for (int ii = 0; ii <6; ii++)//������ÿһλ�굽ery
		{
			ery[ii] = temp % 10;
			if (temp < 10)break;
			temp = temp / 10;
			iii++;
		}
		for (j = 0; j < iii +1/ 2; j++)
		{
			if (ery[j] == ery[iii - j]) k++;//�����ͬ�����ֶ���=1/2λ��
		}
		if (k == iii+1 / 2)
		{
			hw[n] = i;
			n++;
		}
		iii = 0;
	}
	//for (j = 0; j < 2000; j++)//���Ի�������
	//{
	//	if (hw[j] == 0) break;
	//	printf("%d\n", hw[j]);
	//}
	for (j = 0; j < 2000; j++)
	{
		int q = 2;
		for (int m = 2; m < hw[j]/2; m++)
		{
			if (hw[j] % m != 0) q++;
		}
		if (q == hw[j] / 2) printf("%d\n", hw[j]);
	}
}