/**
 *print_triangle - prints a triangle
 *
 *@size: size of triangle
 *Return: void
 */

#include "main.h"

void print_triangle(int size)
{
	int lines;
	int width;

	for (lines = 0; lines < n ; lines++)
	{
		for (width = 0; width < n; width++)
		{
			if (width < (n - lines))
				_putchar(32);
			else
				_putchar(35);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
