/**
 *print_to_98 - prints frome iput to 98
 *
 *@n: starting number
 *
 *Return: void
 */

#include <stdio.h>

void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}
	printf("\n");
}
