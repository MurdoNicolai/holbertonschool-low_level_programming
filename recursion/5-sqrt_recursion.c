#include "main.h"
/**
 *sqroot - test if root
 *
 *@n: result to get
 *@x: minimum squareroot
 *Return: the square root of n
 */

int sqroot(int x, int n)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqroot(x + 1, n));
}

/**
 * _sqrt_recursion - square root a number
 *
 *@n: number to get square root of
 *Return: result
 */




int _sqrt_recursion(int n)
{
	return (sqroot(0, n));
}
