
#include<stdio.h>
int main()
{
	int grp, grp_[5], i, ii;//grpΪ������grp_[]���ڱ��ÿһ�е������Ǽ�
	char ch[5][10];
	scanf("%d", &grp);
	for (i = 0; i < grp; i++) scanf("%s", &ch[i]);//�����ַ���
	for (i = 0; i < grp; i++) scanf("%d", &grp_[i]);//�������һ�еı��������i�еı��Ϊ��
	for (i = 0; i < grp - 1; i++)//�����i���ַ���
	{
		for (ii = 0; ii < grp; ii++) if (grp_[ii] == i) printf("%s ", ch[ii]);//�������Ϊi�����У��������
	}
	for (i = 0; i < grp; i++) if (grp_[i] == grp - 1)printf("%s\n", ch[i]);//������һ�е��ַ���
}