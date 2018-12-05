#include<stdio.h>
int main(void)
{
	int a, b;
	printf("This program computers moduli.\n");
	printf("Enter an:\n");
	scanf_s("%d", &b);
	printf("NOW enter the first:\n");
	scanf_s("%d", &a);
	while (a > 0)
	{
		printf("%d %% %d is %d\n", a, b, a%b);
		printf("Enter next:\n");
		scanf_s("%d",&a);
	}
	printf("Done\n");
	return 0;
}