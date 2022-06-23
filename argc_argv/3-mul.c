#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints multiplication
 *
 *@argc: number of erguments
 *@argv: contains arguments
 *Return: 0 if ok 1 if error
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
