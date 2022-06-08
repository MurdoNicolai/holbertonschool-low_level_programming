#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints the alphabet in reverse
*
*Return: Always 0
*/
int main(void)
{
	int letter;
	int newline = 10;

	for (letter = 122; letter > 96; letter--)
		putchar(letter);
	putchar(newline);
}
