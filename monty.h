#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>

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
    void (*function)(stack_t **);
} Command;


extern stack_t *head;

int  read(char *filepath);
void whenpush(char *command, char *arg, int line_number);
void IsInstructionValid(char *command, int line_number);
void push(stack_t **head, int arg);
void pall(stack_t **head);
bool isargint(char *argument);
#endif /* MONTY_H */

