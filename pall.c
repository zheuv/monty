#include "monty.h"




void pall(stack_t **head, int arg)
{
	stack_t *cursor;
	int i;
	if (*head == NULL)
	{
		fprintf(stderr,"empty stack");
		return;
	}

	cursor = *head;
	i = arg;
	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
