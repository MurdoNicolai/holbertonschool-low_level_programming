#include <stdio.h>
#include <stdlib.h>
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
		if (atoi(*argv) <= 0 && !(*argv[0] == '0' && *argv[1] == 0))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(*argv);
	}
	printf("%d\n", result);
	return (0);
}
