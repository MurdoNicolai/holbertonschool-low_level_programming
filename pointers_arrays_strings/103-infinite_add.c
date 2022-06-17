#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>


/**
 *rev_string - reverse a string
 *
 *@s: string to reverse
 *Return: void
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	char str[100];

	for (i = 0; i < len ; i++)
		str[len - i - 1] = s[i];
	strcpy(s, str);
}

/**
 **infinite_add - adds 2 numbers entered as strings
 *
 *
 *@n1: string to add
 *@n2: with thisone
 *@r: results goes here
 *@size_r: size of r
 *Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int res, i1 = 0, i2 = 0, cr = 0, over = 0, c1, c2;

	i1 = strlen(n1);
	i2 = strlen(n2);
	while (i1 >= 0 || i2 >= 0)
	{
		c1 = n1[i1] - '0';
		if (i1 < 0)
			c1 = 0;
		c2 = n2[i2] - '0';
		if (i2 < 0)
			c2 = 0;
		i1--;
		i2--;
		res = c1 + c2 + over;
		over = 0;
		if (res > 9)
		{
			over = 1;
			res -= 10;
		}
		size_r--;
		if (size_r > 0)
			r[cr] = res + '0';
		else
			return (0);
		cr++;
	}
	if (over == 1)
	{
		r[cr] = 1 + '0';
		cr++;
	}
	if (size_r < 1)
		return (0);
	r[cr] = '\0';
	rev_string(r);
	r[cr - 1] = '\0';
	return (r);
}
