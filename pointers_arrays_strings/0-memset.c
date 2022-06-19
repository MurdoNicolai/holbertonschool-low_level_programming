/**
 *_memset - fils memory with constant byte
 *
 *@n: amount to bytes to fill
 *@s: starting point
 *@b: fill with this
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
