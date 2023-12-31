#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
#include <sys/types.h>

#define MAX_LINE_LENGTH 1024


typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;

int  read(char *filepath);
void whenpush(char *arg, int line_number);
void IsInstructionValid(char *command, unsigned int line_number);
void push(stack_t **head, int arg);
void pall(stack_t **head, unsigned int line_number);
bool isargint(char *argument);
#endif /* MONTY_H */

