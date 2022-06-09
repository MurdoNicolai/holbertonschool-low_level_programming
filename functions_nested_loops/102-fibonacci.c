/**
 *main - prints first 50 fibonacci numbers
 *
 *Return: alway 0
 */
#include <stdio.h>

int main(void)
{
	int n;
	long fibon = 2;
	long fib = 1;

	printf("%ld, %ld", fib, fibon);
	for (n = 2; n < 50 ; n++)/*the first 2 ar already printed*/
	{
		fibon = fib + fibon;
		fib = fibon - fib;
		printf (", %ld", fibon);
	}
	printf("\n");
	return (0);
}
