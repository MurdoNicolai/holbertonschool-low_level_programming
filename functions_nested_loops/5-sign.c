/**
 *print_sign - prints sign of number
 *
 *@n: number to test
 *
 *Return: 1=positive, 0=zero, -1=negative
 */

#import "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
