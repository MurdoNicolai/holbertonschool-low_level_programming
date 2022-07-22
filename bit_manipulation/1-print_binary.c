#include <stdio.h>

/**
 *print_binary - prints binary representation of number
 *@n: number to print
 *Return: void
 */


void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; n == (n & (0xffffffffffffffff >> (64 - i))) && i > 0; i--)
		n = (n & (0xffffffffffffffff >> (64 - i)));
	for (; i >= 0; i--)
	{
		putchar((n >> i) + '0');
		n = (n & (0xffffffffffffffff >> (64 - i)));
	}
}
