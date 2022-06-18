#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

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
		printf("-");
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
		printf("%c", car + '0');
		i /= 10;
	}
	if (n > 9)
		n += 39;
	printf("%c", n + '0');
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
	int i = 0, i2 = 0, c10, bsize = size, tsize;
	long l;

	while (i < size)
	{
		for (l = 4294967296; l > i + 1; l /= 16)
			printf("0");
		print_hexa(i);
		printf(":");
		tsize = bsize;
		i2 = i;
		for (c10 = 0; c10 < 10; c10++)
		{
			if (c10 % 2 == 0)
				printf(" ");
			if (tsize <= 0)
			{
				printf("  ");
			}
			else
			{
				if (b[i2] < 16)
					printf("0");
				print_hexa(b[i2]);
			}
			tsize--;
			i2++;
		}
		printf(" ");
		for (c10 = 0; c10 < 10 && bsize > 0; c10++)
		{
			if (b[i] < 20)
				printf(".");
			else
				printf("%c", b[i]);
			bsize--;
			i++;
		}
		printf("\n");
	}
}
