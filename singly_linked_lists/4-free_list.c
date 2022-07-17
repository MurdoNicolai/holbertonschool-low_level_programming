/**
 *free_list - frees a list
 *@head: head of list
 *Return: void
 */


void free_list(list_t *head)
{
   list_t *tmp;

   while (head != NULL)
	{
	   tmp = head;
	   head = head->next;
	   free(tmp);
	}
}
