/**
 * clear_bit - set a bit to 0
 * @n: number to change
 * @index: bit to change
 * Return: 1 or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
