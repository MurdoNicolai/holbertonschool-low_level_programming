/**
 *main - prints numbers 1 to 100 replace multiples of 3/5 by fiz/buzz
 *
 *Return: always 0
 */
#include <stdio.h>

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
			if (n % 5 != 0)
				printf(" ");
		}
		if (n % 5 == 0)
	        {
			printf("Buzz");
			if (n != 100)
				printf(" ");
		}
		if ((n % 3 != 0) && (n % 5 != 0))
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
