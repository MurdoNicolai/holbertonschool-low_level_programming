/**
 *print_diagonal - prints a diagonal line
 *
 *@n: length of line
 *Return: void
 */

#include "main.h"

void print_diagonal(int n)
{
	int lines;
	int spaces;

	for (lines = 0; lines < n ; lines++)
	{
		for (spaces = 1; spaces < lines; spaces++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
