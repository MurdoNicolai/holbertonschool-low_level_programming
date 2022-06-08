#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - tells if random number is positive
*
*Return: Always 0
*/
int main(void)
{
	int n;
	int lasn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasn = abs(n % 10); /*put only the last digit of n into lasn*/
	if (lasn > 5)
	{
		printf("Last digit of");
		printf("%d is %d and is greater than 5\n", n, lasn);
	}
	else if (lasn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasn);
	}
	else
	{
		printf("Last digit of");
		printf("%d is %d and is less than 6 and not 0\n", n, lasn);
	}
	return (0);
}
