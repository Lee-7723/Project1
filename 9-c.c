#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int grp,num=0,cap=0,let=0,cha=0;//组数、数字个数、大写字母个数、小写字母个数、符号个数
	char tst[10][31];
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)scanf("%s", tst[i]);
	for (int i = 0; i < grp; i++)
	{
		if (strlen(tst[i]) < 6)printf("no\n");//判断够不够6位
		else
		{
			for (int ii = 0; ii < strlen(tst[i]); ii++)
			{
				if (tst[i][ii] >= '0' && tst[i][ii] <= '9')num++;
				if (tst[i][ii] >= 'a' && tst[i][ii] <= 'z')let++;
				if (tst[i][ii] >= 'A' && tst[i][ii] <= 'Z')cap++;
				if(tst[i][ii]=='~'|| tst[i][ii] == '!' || tst[i][ii] == '@' || tst[i][ii] == '#' || tst[i][ii] == '$' || tst[i][ii] == '%' || tst[i][ii] == '^' || tst[i][ii] == '&' || tst[i][ii] == '*' || tst[i][ii] == '(' || tst[i][ii] == ')' || tst[i][ii] == '[' || tst[i][ii] == ']' || tst[i][ii] == '{' || tst[i][ii] == '}' || tst[i][ii] == '|' || tst[i][ii] == '\\' || tst[i][ii] == '<' || tst[i][ii] == '>' || tst[i][ii] == '?' || tst[i][ii] == '/' || tst[i][ii] == '.' || tst[i][ii] == ',' || tst[i][ii] == ':' || tst[i][ii] == ';' || tst[i][ii] == '\"' || tst[i][ii] == '\'' )cha++;
			}
			if (num + let + cap + cha == strlen(tst[i]) && (num != 0 && let != 0 && cap != 0 && cha != 0) || (let != 0 && cap != 0 && cha != 0) || (num != 0 && cap != 0 && cha != 0) || (num != 0 && let != 0 && cha != 0) || (num != 0 && let != 0 && cap != 0))printf("yes\n");//判断字符是否由以上字符组成（有无额外字符）；判断包含是否够3类
			else printf("no\n");
			num = 0;
			let = 0;
			cap = 0;
			cha = 0;
		}
	}
	/*for (int i = 0; i < grp; i++)//测试strlen函数
	{
		printf("%d\n", strlen(tst[i]));
	}*/
	system("pause");
}