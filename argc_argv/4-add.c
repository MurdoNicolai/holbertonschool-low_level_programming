#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *digits_only - checks if string contains only digits
 *
 *@s: string to test
 *Return: 1 if true, 0 if not
 */

int digits_only(const char *s)
{
	while (*s)
	{
		if (isdigit(*s++) == 0)
			return (0);
	}

	return (1);
}

/**
 *main - prints addition
 *
 *@argc: number of erguments
 *@argv: contains arguments
 *Return: 0 if ok 1 if error
 */
int main(int argc, char **argv)
{
	int result = 0;

	for (; argc > 1; argc--)
	{
		argv++;
		if (!digits_only(*argv))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(*argv);
	}
	printf("%d\n", result);
	return (0);
}
