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
	int c2;
	int i;
	int power;
	int add;
	int integer = 0;
	int ispositive = 1;

	while (!isdigit(s[c]) /*|| (s[c] != '\0')*/)
	{
		if (s[c] == '-')
			ispositive--;
		else if (s[c] == '+')
			ispositive++;
		c++;
	}
	c2 = c;
	while (isdigit(s[c2]))
	{
		power++;
	}
	while (isdigit(s[c]))
	{
		add = (s[c] - '0');
		for (i = 0; i < power; i++)
			add *= 10;
		power--;
		integer += add;
	}
	if (ispositive <= 0)
		integer *= -1;
	return (integer);
}
