#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 *reverse_array - reverse a array
 *
 *@a: array to reverse
 *@n: number of elements in array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int ints[1000];

	for (i = 0; i < n ; i++)
	{
		ints[n - i - 1] = a[i];	}
	for (i = 0; i < n ; i++)
	{
		a[i] = ints[i];
	}
}
