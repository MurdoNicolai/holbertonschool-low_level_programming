/**
 *print_alphabet - prints alphabet
 *
 *Return: Void
 */
#include "main.h"

void print_alphabet(void)
{
	int letter;
	int newline = 10;

	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar(newline);
}
