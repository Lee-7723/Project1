# include<stdio.h>
int main()
{
	int T, i, j, p[100][18], q[100] = { 0 };
	int b[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };//系数 
	char c[12] = { '1','0','X','9','8','7','6','5','4','3','2','\0' };//余数的对应值
	char a[100][18];
	scanf("%d", &T);//输入身份证号个数 
	for (i = 0; i < T; i++)
		scanf("%s", a[i]);//输入每行的字符 
	for (i = 0; i < T; i++)
	{
		for (j = 0; j < 17; j++)
		{
			p[i][j] = (a[i][j] - '0') * b[j];	//每位数乘以系数 
			q[i] = q[i] + p[i][j];//对上式求和 
		}
	}
	for (i = 0; i < T; i++)
	{
		if (c[q[i] % 11] == a[i][17])//判定 
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}