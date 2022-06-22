/**
 *_isalpha - test in caracter is letter
 *
 *@c: caracter to test
 *
 *Return: 1 if c is letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
