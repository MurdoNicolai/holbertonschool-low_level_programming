#include <stdio.h>
#include <stddef.h>
/**
 *print_diagsums - ints both sums of diagonals of square matrix
 *
 *@a: matrix to sum
 *@size: size of a
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i + (size * i)];
		sum2 += a[size - i - 1 + (size * i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
