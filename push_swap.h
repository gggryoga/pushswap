#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// typedef struct s_list
// {
// 	int number;
// 	struct t_list *next;
// }t_list;
// typedef struct s_stuck
// {
// 	struct data *head;
// 	int size_list;
// }t_stuck;

typedef struct s_stack
{
	int *a;
	int *b;
	int a_size;
	int b_size;
	char *hi;
}t_stack;


#endif
