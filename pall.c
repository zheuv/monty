#include "monty.h"




void pall(stack_t **head)
{
	if (*head = NULL)
	{
		fprintf(stderr,"empty stack");
		return 1;
	}
	stack_t *cursor = *head;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
