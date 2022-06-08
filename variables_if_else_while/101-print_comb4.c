#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints unic combinations of 2 numbers frome 0 to 9
*
*Return: 0 if worked 1 if not
*/
int main(void)
{
	/*init*/
	int number1;
	int number2;
	int number3;
	int newline = 10;
	int space = 32;
	int comma = 44;

	for (number1 = 48; number1 < 58; number1++)
	{
		for (number2 = (number1 + 1); number2 < 58; number2++)
		{
			for (number3 = (number2 + 1); number3 < 58; number3++)
			{
				putchar(number1);
				putchar(number2);
				putchar(number3);
				if (number1 == 55)
				{
					putchar(newline);
					return (0);
				}
				putchar(comma);
				putchar(space);
			}
		}
	}
	return (1);
}
