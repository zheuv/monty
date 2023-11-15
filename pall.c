#include "monty.h"




void pall(stack_t **head)
{
	stack_t *cursor;

	if (*head == NULL)
	{
		fprintf(stderr,"empty stack");
		return;
	}

	cursor = *head;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
