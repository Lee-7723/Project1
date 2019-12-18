# include<stdio.h>
# include<string.h>
int main()
{
	int T, i, j, k = 0, num[10], putout[10][20] = { 0 };
	char str[10][21];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
		scanf("%s", str[i]);
	for (i = 0; i < T; i++)
	{
		num[i] = strlen(str[i]);
		for (j = 0; j < num[i]; j++)
		{
			if (str[i][j] == 'B' || str[i][j] == 'F' || str[i][j] == 'P' || str[i][j] == 'V')
				putout[i][j] = 1;
			else if (str[i][j] == 'C' || str[i][j] == 'G' || str[i][j] == 'J' || str[i][j] == 'K' || str[i][j] == 'Q' || str[i][j] == 'S' || str[i][j] == 'X' || str[i][j] == 'Z')
				putout[i][j] = 2;
			else if (str[i][j] == 'D' || str[i][j] == 'T')
				putout[i][j] = 3;
			else if (str[i][j] == 'L')
				putout[i][j] = 4;
			else if (str[i][j] == 'M' || str[i][j] == 'N')
				putout[i][j] = 5;
			else if (str[i][j] == 'R')
				putout[i][j] = 6;
			else if (str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U' || str[i][j] == 'H' || str[i][j] == 'W' || str[i][j] == 'Y')
				putout[i][j] = 7;
			
		}
		for (j = 0; j < num[i]; j++)if (putout[i][j] != putout[i][j + 1] && putout[i][j] != 7)//³õÎªj-1£¬Ô½½ç
				printf("%d", putout[i][j]);
		printf("\n");
	}
	return 0;
}