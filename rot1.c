#include "monty.h"

/**
  *f_rotlptr- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotlptr(stackman_s **head,  __attribute__((unused)) unsigned int counter)
{
	stackman_s *prmt = *head, *aux;

	if (*head == NULL || (*head)->present == NULL)
	{
		return;
	}
	aux = (*head)->present;
	aux->before = NULL;
	while (prmt->present != NULL)
	{
		prmt = prmt->present;
	}
	prmt->present = *head;
	(*head)->present = NULL;
	(*head)->before = prmt;
	(*head) = aux;
}
