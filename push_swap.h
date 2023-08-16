#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int number;
	struct data *next;
}t_stack;

typedef struct s_list
{
	struct data *head;
	int size_list;
}
#endif
