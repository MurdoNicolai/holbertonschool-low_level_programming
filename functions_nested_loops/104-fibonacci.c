/**
 *main - prints first 50 fibonacci numbers
 *
 *Return: alway 0
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	long fibon = 2;
	long fib = 1;
	long fibon2;
	long fib2;
	long E15 = 1000000000000000;
	int carryOver;

	printf("%ld, %ld", fib, fibon);
	for (n = 2; n < 90 ; n++)/*the first 2 ar already printed*/
	{
		fibon = fib + fibon;
		fib = fibon - fib;
		printf(", %ld", fibon);
	}
/*spliting numbers in 2 to reduce length*/
	fibon2 = (fibon - (fibon % E15)) / E15;
	fibon = fibon - (fibon2 * E15);
	fib2 = (fib - (fib % E15)) / E15;
	fib = fib - (fib2 * E15);
	for (n = 90; n < 98; n++)/*to long to print simply*/
	{
		fibon = fib + fibon;
		fib = fibon - fib;
		carryOver = 0;
		if (fibon > E15)
		{
			carryOver = 1;
			fibon -= E15;
		}
		fibon2 = fib2 + fibon2 + carryOver;
		fib2 = fibon2 - fib2 - carryOver;
		printf(", %ld%ld", fibon2, fibon);
	}
	printf("\n");
	return (0);
}
