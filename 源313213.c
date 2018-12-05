#include<stdio.h>
int main(void)
{
	int a, b;
	char ch;
	ch = 'A';
	for (a = 0; a <=5; a++)
	{
		for (b = 0; b <= a; b++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}