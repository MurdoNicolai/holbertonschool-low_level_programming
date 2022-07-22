/**
 *set_bit - sets a bit to 1
 *@n: number to change
 *@index: bit to change
 *Return: 1 if good -1 if not
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
