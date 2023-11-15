#include "monty.h"




void pall(stack_t **head)
{
	if (*head == NULL)
	{
		fprintf(stderr,"empty stack");
		return;
	}
	stack_t *cursor;
	cursor = *head;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
