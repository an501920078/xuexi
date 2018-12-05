#include<stdio.h>
#define YOU 3.785
#define YINLI 1.609
int main(void)
{
	float licheng, youhao;

	printf("shu ru licheng he you hao:\n");
	scanf_s("%f", &licheng);
	scanf_s("%f", &youhao);

	printf("meiyi youhao neng kai liceng:%.1f\n", licheng / youhao);

	printf("ou zhuo suan fa shi:%.1f", (youhao*YOU )/ (licheng*YINLI)*100);

	return 0;
}