/**
 *print_list - prints a list
 *
 *@h: list to print
 *Return: amount of nodes printed
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
