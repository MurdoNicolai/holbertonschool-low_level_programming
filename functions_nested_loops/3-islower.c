/**
 *int _islower - test in caracter is lowercase
 *
 *@c: caracter to test
 *
 *Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
