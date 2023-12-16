#include "monty.h"

/**
* free_stackover - frees a doubly linked list
* @head: head of the stack
*/
void free_stackover(stackman_s *head)
{
	stackman_s *aux;

	aux = head;
	while (head)
	{
		aux = head->present;
		free(head);
		head = aux;
	}
}
