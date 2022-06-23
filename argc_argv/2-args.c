#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints argumentsname of exectuable
 *
 *@argc: number of erguments
 *@argv: contains arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
