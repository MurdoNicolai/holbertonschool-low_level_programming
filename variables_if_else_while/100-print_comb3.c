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
	int newline = 10;
	int space = 32;
	int comma = 44;
	int minnumber2;

	/*smallest number that number 2 will print at each cicle*/
	minnumber2 = 48;

	for (number1 = 48; number1 < 58; number1++)
	{
		minnumber2++;
		for (number2 = minnumber2; number2 < 58; number2++){
			putchar(number1);
			putchar(number2);
			if (number1 == 56)
			{
				putchar(newline);
				return (0);
			}
			putchar(comma);
			putchar(space);
		}
	}
	return (1);
}
