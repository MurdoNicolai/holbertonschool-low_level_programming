#include <string.h>
#include <stdio.h>

/**
 *print_array - prints n elements of aray
 *
 *@a: array to print
 *@n: amount to print
 *Return: void
 */

void print_array(int *a, int n)
{
	int c;
	int len = n;

	for (c = 0 ; c < len ; c++)
	{
		printf("%d", a[c]);
		if (c < len -1)
			printf(", ");
	}
	printf("\n");
}
