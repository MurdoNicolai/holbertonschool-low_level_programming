/**
 *print_square - prints a square
 *
 *@n: size of square
 *Return: void
 */

#include "main.h"

void print_square(int n)
{
	int lines;
	int width;

	for (lines = 0; lines < n ; lines++)
	{
		for (width = 0; width < n; width++)
			_putchar(35);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
