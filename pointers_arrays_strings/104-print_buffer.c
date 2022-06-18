#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
int _putchar(char c)
{
	return (write(1, &c, 1));
	}*/

/**
 *print_hexa - prints hexadecimal valu of int
 *
 *@n: int to print
 *Return: void
 */

void print_hexa(int n)
{
	int i = 268435456;
	int car;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (i > n && n > 0)
		i /= 16;

	while (n > 15)
	{
		car = ((n - (n % i)) / i);
		n =  n % i;
		if (car > 9)
			car += 39;
		_putchar(car + '0');
		i /= 10;
	}
	if (n > 9)
			n += 39;
	_putchar(n + '0');
}


/**
 *print_buffer - prints content as a buffer
 *
 *@b: string to print
 *@size: size of b
 *Return: void
 */

void print_buffer(char *b, int size)
{
	int i = 0;
	int i2 = 0;
	long l;
	int c10;
	int bsize = size;
	int tsize;


	while (i < size)
	{
		for (l = 4294967296; l > i + 1; l /= 16)
		{
			_putchar('0');
		}
		print_hexa(i);
	        _putchar(':');
		tsize = bsize;
		i2 = i;
		for (c10 = 0; c10 < 10; c10 ++)
		{
			if(c10 % 2 == 0)
				_putchar(' ');
			if(tsize <= 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				if(b[i2] < 16)
					_putchar('0');
				print_hexa(b[i2]);
			}
			tsize--;
			i2++;
		}
		_putchar(' ');
		for (c10 = 0; c10 < 10 && bsize > 0; c10 ++)
		{
			if(b[i] < 20)
				_putchar('.');
			else
				_putchar(b[i]);
			bsize--;
			i++;
		}
		_putchar('\n');
	}
}
