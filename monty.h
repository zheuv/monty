#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

#define MAX_LINE_LENGTH 1024


typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct
{
    char *name;
    void (*function)(stack_t **, int);
} Command;


extern stack_t *head;

int  read(char *filepath);
void IsInstructionValid(char *command, char *arg);
void push(stack_t **head, int arg);
void pall(stack_t **head, int arg);
int isargint(char *argument);
#endif /* MONTY_H */

