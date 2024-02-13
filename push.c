#include "monty.h"






void push(stack_t **head, int arg)
{
    stack_t *newnode = malloc(sizeof(stack_t));
    if (newnode == NULL)
    {
        fprintf(stderr, "Error: Cannot allocate memory\n");
        exit(EXIT_FAILURE);
    }

    newnode->n = arg;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head != NULL)
    {
        newnode->next = *head;
        (*head)->prev = newnode;
    }

    *head = newnode;
}
