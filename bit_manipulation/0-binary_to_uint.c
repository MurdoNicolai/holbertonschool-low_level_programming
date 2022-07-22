#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 1 or 0 caracters
 * Return: result or 0 if failled.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int pow2 = 1;
	unsigned int i;

	if (strlen(b) == 0 || !b)
		return (0);
	for (i = strlen(b) - 1; i > 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res += (b[i] - '0') * pow2;
		pow2 *= 2;
	}
	res += (b[0] - '0') * pow2;
	return (res);
}
