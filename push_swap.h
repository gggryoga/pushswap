#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	int number;
	struct t_list *next;
}t_list;
typedef struct s_stuck
{
	struct data *head;
	int size_list;
}t_stuck;
#endif
