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
	int result, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]);
	cents = 0;

	if (result < 0)
		result = 0;
	while (result >= 25)
	{
		result -= 25;
		cents++;
	}
	while (result >= 10)
	{
		result -= 10;
		cents++;
	}
	while (result >= 5)
	{
		result -= 5;
		cents++;
	}
	while (result >= 2)
	{
		result -= 2;
		cents++;
	}
	while (result >= 1)
	{
		result -= 1;
		cents++;
	}
	printf("%d\n", cents);
	return (0);
}
