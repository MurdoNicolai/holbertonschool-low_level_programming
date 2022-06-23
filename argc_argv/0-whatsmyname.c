#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints name of exectuable
 *
 *@argc: useless
 *@argv: contains name
 *Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	argc++;
	return (0);
}
