/**
 *printResult - prints x * y
 *
 *@x: first operand
 *@y: second operand
 *
 *Return: void
 */
#include "main.h"

void printResult(int x, int y)
{
	int result;
	int charResult;

	result = x * y;
	if (result < 10)
	{
		if (x != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(result + '0');
	}
	/*for 2 and 3digit numbers we print each diget seperatly*/
	else if (result < 100)
	{
		_putchar(' ');
		charResult = (result - (result % 10)) / 10;
		_putchar(charResult + '0');
		result = result - (charResult * 10);
		_putchar(result + '0');
	}
	else
	{
		charResult = (result - (result % 100)) / 100;
		_putchar(charResult + '0');
		result = result - (charResult * 100);
		charResult = (result - (result % 10)) / 10;
		_putchar(charResult + '0');
		result = result - (charResult * 10);
		_putchar(result + '0');
	}
}

/**
 *print_times_table - prints n times table
 *
 *@n: times table size
 *
 *Return: void
 */

void print_times_table(int n)
{
	int x;
	int y;
	/*we are printing result = x time y for tablesize = n*/


	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			printResult(x, y);
			if (x < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
