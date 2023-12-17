#include "monty.h"

/**
 * f_queuestr - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queuestr(stackman_s **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.luffy = 1;
}

/**
 * addqueueptr - add node to the tail stack
 * @t: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueueptr(stackman_s **head, int t)
{
	stackman_s *curr_node, *aux;

	aux = *head;
	curr_node = malloc(sizeof(stackman_s));
	if (curr_node == NULL)
	{
		printf("Error\n");
	}
	curr_node->a = t;
	curr_node->present = NULL;
	if (aux)
	{
		while (aux->present)
			aux = aux->present;
	}
	if (!aux)
	{
		*head = curr_node;
		curr_node->before = NULL;
	}
	else
	{
		aux->present = curr_node;
		curr_node->before = aux;
	}
}
