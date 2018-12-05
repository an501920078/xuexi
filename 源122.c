#include<stdio.h>
int main(void)
{
	char zimu[26];
	int a, b;
	b = 26;
	printf("shu ru 26 ge zi mu:\n");
	for (a = 0; a < b; a++)
	{
		scanf_s("%c", &zimu[a]);

	}
	for (a = 0; a < b; a++)
	{
		printf("%c", zimu[a]);
	}
	return 0;
}