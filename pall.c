#include "monty.h"




void pall(stack_t **head, unsigned int line_number)
{
	stack_t *cursor;
	(void)line_number;


	cursor = *head;
	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
