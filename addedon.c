#include "monty.h"
/**
 * addnodefr - add node to the head stack
 * @head: head of the stack
 * @a: new_value
 * Return: no return
*/
void addnodefr(stackman_s **head, int a)
{

	stackman_s *curr_node, *aux;

	aux = *head;
	curr_node = malloc(sizeof(stackman_s));
	if (curr_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
	{
		aux->before = curr_node;
	}
	curr_node->a = a;
	curr_node->present = *head;
	curr_node->before = NULL;
	*head = curr_node;
}
