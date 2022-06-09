/**
 *main - prints sum of even fibonacci till 4M
 *
 *Return: alway 0
 */
#include <stdio.h>

int main(void)
{
	long fibon = 2;
	long fib = 1;
	long long sum = 0;

	while (fibon <= 4000000)
	{
		if ((fibon % 2) == 0)
			sum += fibon;
		fibon = fib + fibon;
		fib = fibon - fib;
	}
	printf("%lld\n", sum);
	return (0);
}
