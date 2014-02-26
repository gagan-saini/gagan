#include <stdio.h>
#include <cs50.h>

int 
main(void)
{
	int a;
	float b;
	printf("Please enter the temperature in Celsius: ");
	a = GetInt();
	printf("You Entered %d°C  \n", a);
	b = (a * 1.8) + 32;
	printf("%d°C is equal to %.1fF \n", a, b); 
	float n, d;
	printf("Please Enter a non-negative numerator: ");
	n = GetFloat();
	while(n < 0)
	{
		printf("Retry: ");
		n = GetFloat();
	}
	printf("Please Enter a positive denominator: ");
	d = GetFloat();
	while(d <= 0)
	{
		printf("Retry: ");
		d = GetFloat();
	}
	float f;
	f = 100 * (n / d);
	printf("Numerator / Denomiator = %.2f%c \n",f, 37); 
}
