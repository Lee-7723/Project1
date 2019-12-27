#include<stdio.h>
#include<string.h>
int main()
{
	int num, i, ii;
	int count = 0, letter = 0, caps = 0, cha = 0;
	char txt[10][31];
	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", txt[i]);
	for (i = 0; i < num; i++)
	{
		if (strlen(txt[i]) >= 6)
		{
			for (ii = 0; ii < strlen(txt[i]); ii++)
			{
				if (txt[i][ii] >= '0' && txt[i][ii] <= '9')
					count++;
				if (txt[i][ii] >= 'a' && txt[i][ii] <= 'z')
					letter++;
				if (txt[i][ii] >= 'A' && txt[i][ii] <= 'Z')
					caps++;
				if (txt[i][ii] == '~' || txt[i][ii] == '!' || txt[i][ii] == '@' || txt[i][ii] == '#' || txt[i][ii] == '$' || txt[i][ii] == '%' || txt[i][ii] == '^' || txt[i][ii] == '&' || txt[i][ii] == '*' || txt[i][ii] == '(' || txt[i][ii] == ')' || txt[i][ii] == '[' || txt[i][ii] == ']' || txt[i][ii] == '{' || txt[i][ii] == '}' || txt[i][ii] == '|' || txt[i][ii] == '\\' || txt[i][ii] == '<' || txt[i][ii] == '>' || txt[i][ii] == '?' || txt[i][ii] == '/' || txt[i][ii] == '.' || txt[i][ii] == ',' || txt[i][ii] == ':' || txt[i][ii] == ';' || txt[i][ii] == '\"' || txt[i][ii] == '\'')
					cha++;
			}
			if ((count + letter + caps + cha == strlen(txt[i])) && (count > 0 && letter > 0 && caps > 0 && cha > 0) || (count == 0 && letter > 0 && caps > 0 && cha > 0) || (count > 0 && letter == 0 && caps > 0 && cha > 0) || (count > 0 && letter > 0 && caps == 0 && cha > 0) || (count > 0 && letter > 0 && caps > 0 && cha == 0))
				printf("yes\n");
			else printf("no\n");
			count = 0;
			letter = 0;
			caps = 0;
			cha = 0;
		}
		else printf("no\n");
	}
}
