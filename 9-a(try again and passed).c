#include<stdio.h>
#include<string.h>
int main()
{
	char input[100];
	int num[100] = { 0 }, rst[1000];
	scanf("%s", input);
	for (int i = 0; i < 1000; i++)rst[i] = 2;//��ʼ��rst
	for (int i = 0; input[i] != '\0'; i++)num[i] = input[i] - '0';//�ַ�ת����
	for (int i = 0; i < 1000; i++)
	{
		int a = 0;
		for (int ii = 0; ii < strlen(input); ii++)if(num[ii]==0)a++;//��������ȫΪ0��ʱ������ѭ��
		if (a == strlen(input))break;
		rst[i] = num[strlen(input) - 1]%2;//��¼����
		for (int ii = 1; ii < strlen(input); ii++)num[ii] = num[ii] + (num[ii - 1] % 2) * 10;//��λ����
		for (int ii = 0; ii < strlen(input); ii++)num[ii] = num[ii] / 2;//ÿһλ���Զ�
	}
	for (int i = 0; i < 1000; i++)if (rst[999 - i] != 2)printf("%d", rst[999 - i]);//�������
}