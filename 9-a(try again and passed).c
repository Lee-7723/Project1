#include<stdio.h>
#include<string.h>
int main()
{
	char input[100];
	int num[100] = { 0 }, rst[1000];
	scanf("%s", input);
	for (int i = 0; i < 1000; i++)rst[i] = 2;//初始化rst
	for (int i = 0; input[i] != '\0'; i++)num[i] = input[i] - '0';//字符转数字
	for (int i = 0; i < 1000; i++)
	{
		int a = 0;
		for (int ii = 0; ii < strlen(input); ii++)if(num[ii]==0)a++;//当被除到全为0的时候，跳出循环
		if (a == strlen(input))break;
		rst[i] = num[strlen(input) - 1]%2;//记录余数
		for (int ii = 1; ii < strlen(input); ii++)num[ii] = num[ii] + (num[ii - 1] % 2) * 10;//借位操作
		for (int ii = 0; ii < strlen(input); ii++)num[ii] = num[ii] / 2;//每一位除以二
	}
	for (int i = 0; i < 1000; i++)if (rst[999 - i] != 2)printf("%d", rst[999 - i]);//逆向输出
}