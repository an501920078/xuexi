#include<stdio.h>
int main(void)
{
	int b, c;
	char a;
	for (b = 1; b <= 6; b++)
	{
		for (a='F';a>=('F'-b+1); a--)
		printf("%c",a );
		printf("\n");
	}
	return 0;
}