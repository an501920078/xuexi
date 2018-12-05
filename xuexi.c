#include<stdio.h>
int main(void)
{
	int a, b, c;
	char d,g;

	printf("shu ru yi ge da xie zi mu:");
	while (scanf_s("%c", &d) ==1)
	{
		if(d='\n')
		continue;
		for (a = 0; a <= (d - 'A' + 1); a++)
		{
			for (b = 0; b < (d - 'A' - a + 1); b++)
			{
				printf(" ");
			}
			for (g = 'A'; g < ('A' + a); g++)//d ÊÇE
			{
				printf("%c", g);        //A

			}
			for (g; g > 'B'; g--)
				printf("%c", g - 2);

			printf("\n");
		}
		printf("shu ru yi ge da xie zi mu:");
		
		
	}
	return 0;
}