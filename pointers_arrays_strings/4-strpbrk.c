/**
 *_strpbrk - finds any byte of string in another string
 *
 *@s: string to test
 *@accept: string to find
 *Return: location of first byte
 */

char *_strpbrk(char *s, char *accept)
{
	int n;
	int i;
	int test;

	for (n = 0; s[n]; n++)
	{
		test = 0;
		for (i = 0; accept[i]; i++)
		{
			if (s[n] == accept[i])
				test = 1;
		}
		if (test == 0)
			return (n);
	}
	return (s + n);
}
