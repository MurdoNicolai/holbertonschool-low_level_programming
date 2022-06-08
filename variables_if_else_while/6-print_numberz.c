#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints numbers frome 0 to 9
*
*Return: Always 0
*/
int main(void)
{
	int number;
	int newline = 10;

	for (number = 48; number < 58; number++)
		putchar(number);
	putchar(newline);
	return (0);
}
