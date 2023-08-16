#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_data
{
	struct data *head;
	int number;
	struct data *next;
	struct data *prev;
}t_data;

#endif
