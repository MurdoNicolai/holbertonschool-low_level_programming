#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*print_last_digit - prints the last digit
*
*@n: number to print frome
*
*Return: result
*/

int print_last_digit(int n)
{
	n = abs(n % 10);
	_putchar(n + '0');
	return (n);
}
