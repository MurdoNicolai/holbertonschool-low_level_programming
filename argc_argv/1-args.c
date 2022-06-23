#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints number of erguments passed
 *
 *@argc: contains number
 *@argv: useless
 *Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
