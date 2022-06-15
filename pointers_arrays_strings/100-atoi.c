/**
 *_atoi - converts string to char
 *
 *@s: string to convert
 *Return: integer
 */

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int _atoi(char *s)
{
	int c = 0;
	int c2 = 0;
	int i = 0;
	int power = 0;
	int add = 0;
	int integer = 0;
	int isnegative = 0;

	while (!isdigit(s[c]) && s[c])
	{
		if (s[c] == '-')
			isnegative++;
		c++;
	}
	c2 = c;
	while (isdigit(s[c2]) && s[c])
	{
		power++;
		c2++;
	}
	while (isdigit(s[c]) && s[c])
	{
		add = (s[c] - '0');
		for (i = 1; i < power; i++)
			add *= 10;
		power--;
		integer += add;
		c++;
	}
	if (isnegative % 2 == 1)
		integer *= -1;
	return (integer);
}
