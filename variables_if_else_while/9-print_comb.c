#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints numbers frome 0 to 9
*
*Return: 0 if worked 1 if not
*/
int main(void)
{
	int number;
	int newline = 10;
	int space = 32;
	int comma = 44;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
		if (number == 57)
		{
			putchar(newline);
			return (0);
		}
		putchar(comma);
		putchar(space);
	}
	return (1);
}
