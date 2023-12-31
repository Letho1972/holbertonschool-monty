#include "monty.h"

/**
 * pop - free the head
 *
 * @list: actual stack
 * @line_number: actual line of monty instruction
 *
 * Return: No return, void function
 */

void pop(stack_t **list, unsigned int line_number)
{
	stack_t *temp_pop;

	if (*list == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_pop = *list;
	if ((*list)->next != NULL)
	{
		*list = (*list)->next;
		(*list)->prev = NULL;
	}

	free(temp_pop);
}
