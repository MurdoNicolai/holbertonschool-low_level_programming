#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - does basic operations and prints
 *
 *@argc: number of arguments should be 3
 *@argv: number operand number if ok
 *Return: 0 if good 98,99,100 if not
 */


int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	char *op;
	long int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	op = argv[2];
	if (!get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(op)(arg1, arg2);
	printf("%ld\n", result);
	return (0);
}
