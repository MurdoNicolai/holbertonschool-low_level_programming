/**
 *_strchr - find caracter in string
 *
 *@s: string to search
 *@c: caracter to find
 *Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
		if (!s[i])
			return (s[i]);
	}
	return (s + i);
}
