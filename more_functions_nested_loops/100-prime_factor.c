/**
 *main - prints largest prime factor of 612852475143
 *
 *Return: always 0
 */

#include <stdio.h>

int main(void)
{
	long n = 612852475143;
	int factor;

	while (n > 1)
	{
		for (factor = 2; (n % factor) != 0; factor++)
			;
		n /= factor;
	}
	printf("%d\n", factor);
	return (0);
}
