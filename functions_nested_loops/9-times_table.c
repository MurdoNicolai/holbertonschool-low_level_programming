/**
 *times_table - prints times table
 *
 *Return: void
 */
#include "main.h"

void times_table(void)
{
	int x;
	int y;
	int result;
	/*we are printing result = x time y*/

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			result = x * y;
			if (result < 10)
			{
				if (x != 0)
					_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result - (result % 10)) / 10 + '0');
				_putchar((result % 10) + '0');
				/*for 2 digit numbers we print each diget seperatly*/
			}
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
