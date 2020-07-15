#include<stdio.h>

double CelToFah(double c)//¼·¾¾¸¦ È­¾¾·Î
{
	return 1.8 * c + 32;
}
double FahToCel(double f)//È­¾¾¸¦ ¼·¾¾·Î
{
	return (f - 32) / 1.8;
}
int main(void)
{
	int sel;
	double num;
	printf("1 . ¼·¾¾¸¦ È­¾¾·Î 2. È­¾¾¸¦ ¼·¾¾·Î\n");
	printf("¼±ÅÃ>>");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("¼·¾¾ ÀÔ·Â:");
		scanf("%lf", &num);
		printf("º¯È­µÈ È­¾¾ : %f\n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("È­¾¾ ÀÔ·Â :");
		scanf("%lf", &num);
		printf("º¯È­µÈ ¼·¾¾ : %f \n", FahToCel(num));

	}
	else
	{
		printf("¼±ÅÃ ¿À·ù \n");
	}
	return 0;
}