#include<stdio.h>
int main()
{
	char a[5][11];
	char* p[5] = { &a[0][0],&a[1][0],&a[2][0],&a[3][0],&a[4][0] };
	int order[6]; int num;
	scanf("%d", &num); getchar();
	for (int i = 0; i < num; i++) gets(p[i]);
	for (int i = 0; i < num; i++)scanf("%d", &order[i]);
	for (int i = 0; i < num; i++){
		for (int ii = 0; ii < num; ii++){
			if (order[ii] == i) { 
				int x = 0;
				printf("%s",p[ii]);
				//while(*(*(p + ii) + x) != 0)printf("%c", *(*(p + ii) + (x++)));
				if (i != num - 1)putchar(' '); 
				else putchar('\n');
	}}}
	return 0;
}
