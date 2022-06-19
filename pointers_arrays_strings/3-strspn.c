/**
 *_strspn - counts bytes in one string 1 till 1 not present in string 2
 *
 *@s: string to test
 *@accept: bytes to test for s
 *Return: the amount
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int i;

	for (n = 0; s[n]; n++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[n] != accept[i])
				return (n);
		}
	}
	return (n);
}
