#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints the alphabet
*
*Return: Always 0
*/
int main(void)
{
	int letter;
	int newline = 10;

	for (letter = 97; letter < 123; letter++)
		putchar(letter);
	for (letter = 65; letter < 91; letter++)
		putchar(letter);
	putchar(newline);
	return (0);
}
