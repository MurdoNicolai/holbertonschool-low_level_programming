#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints unic combinations of 2 numbers frome 01 to 99
*
*Return: 0 if worked 1 if not
*/
int main(void)
{
	/*init: print order "number11number12" "number21number22", */
	int number11;
	int number12;
	int number21;
	int number22;
	int newline = 10;
	int space = 32;
	int comma = 44;

	for (number11 = 48; number11 < 58; number11++)
	{
		for (number12 = 48; number12 < 58; number12++)
		{
			for (number21 = number11; number21 < 58; number21++)
			{
				if (number11 == number21)
					number22 = number12 + 1;
				else
					number22 = 48;
				/*the if statement makes sure that the first and second number differ*/
				for (; number22 < 58; number22++)
				{
					putchar(number11);
					putchar(number12);
					putchar(space);
					putchar(number21);
					putchar(number22);
					if (number11 == 57 && number12 == 56)
					{
						putchar(newline);
						return (0);
					}
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	return (1);
}
