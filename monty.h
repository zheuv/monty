#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

#define MAX_LINE_LENGTH 1024

// Stack structure
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

// Command structure
typedef struct
{
    char *name;
    void (*function)(stack_t **, int);
} Command;

// Global variable for the head of the stack
extern stack_t *head;

// Function prototypes
char* analysearg(char *arg);
void read(char *filepath);
void IsInstructionValid(char *command, char *arg);
void push(stack_t **head, int arg);
void pall(stack_t **head);

#endif /* MONTY_H */

