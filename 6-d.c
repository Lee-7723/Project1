#include<stdio.h>
int main()
{
	char tst[10][50];//���ڲ��Ե��ַ�
	int grp,cnt[10] = { 0 }, i,ii,a=1;//grp������cntÿ���ַ�����
	scanf("%d", &grp);
	for (i = 0; i < grp; i++)
	{
		scanf("%s", &tst[i]);
		while (tst[i][cnt[i]] != '\0')
		{
			cnt[i]++;//���ڼ���ÿһ���ж��ٸ��ַ�
		}
		ii = 0;
	}
	for (i = 0; i < grp; i++)
	{
		if (cnt[i] > 31) printf("no\n");//�ж��ַ������Ƿ񳬹�31
		else if (tst[i][0] == '_' || (tst[i][0]>='A'&& tst[i][0] <= 'Z')|| (tst[i][0] >= 'a' && tst[i][0] <= 'z'))//�жϵ�һ���ַ��Ƿ����»��߻���ĸ
		{
			for (ii = 1; ii < cnt[i]; ii++)
			{
				if (tst[i][ii] == '_' || (tst[i][ii] >= '0' && tst[i][ii] <= '9') || (tst[i][ii] >= 'A' && tst[i][ii] <= 'Z') || (tst[i][ii] >= 'a' && tst[i][ii] <= 'z'))a++;//�ж������ַ���a�������Ϸ��ַ��ĸ���
				else break;
			}
			if (a == cnt[i])printf("yes\n");//����Ϸ��ַ�������ȫ���ַ�����һ����ͺϷ�
			else printf("no\n");
			a = 1;
		}
		else
		{
			printf("no\n");
		}
	}
}