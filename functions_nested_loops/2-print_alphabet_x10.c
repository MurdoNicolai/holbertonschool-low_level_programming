/**
 *print_alphabet_x10 - prints alphabet 10 times
 *
 *Return: Void
 */
#include "main.h"

void print_alphabet_x10(void)
{
	int letter;
	int newline = 10;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (letter = 97; letter < 123; letter++)
		{
			_putchar(letter);
		}
		_putchar(newline);
	}
}
