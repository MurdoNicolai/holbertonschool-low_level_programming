#include <stdio.h>

/**
 *print_binary - prints binary representation of number
 *@n: number to print
 *Return: void
 */


void print_binary(unsigned long int n)
{
	int i = 23;

	for (i = 31; n == (n & (0xffffffff >> (32 - i))) && i > 0; i--)
		n = (n & (0xffffffff >> (32 - i)));
	for (; i >= 0; i--)
	{
		_putchar((n >> i) + '0');
		n = (n & (0xffffffff >> (32 - i)));
	}
}
