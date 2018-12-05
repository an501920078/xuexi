#include<stdio.h>
void Temperatures(double n);
int main(void)
{
	double a;
	printf("shu ru yi ge hua shi:");
	while (scanf_s("%lf", &a) == 1)
	{
		Temperatures(a);
		printf("shu ru yi ge hua shi:");
	}
	printf("jie shu\n");
	return 0;
}

void Temperatures(double n)
{
	double b, c;
	 const double d = 273.16;
	 const double f = 32.0;

	b = 5.0 / 9.0*(n - f);
	c = b + d;
	printf("she shi:%.2f kai shi:%.2f\n", b, c);

}