#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int *a;
	int *b;
	int a_size;
	int b_size;
	char *join_argv;
}t_stack;

void	create_index(t_stack *s);
int check_sorted(t_stack *s);
void check_samenum_and_sorted(t_stack *s, int i);
void check_error(int argc,char **argv);
void error_message_and_free(t_stack *s,char *message);
void	sort_three(t_stack *s);
void	sort_four_five(t_stack *s);
void	radix_sort(t_stack *s);
int len_words(const char *s);
int	atoi_pusw(const char *nptr, t_stack *s);
void	make_only_numbers(t_stack *s);
void make_stack_head(int argc,char **argv,t_stack *s);
void	swap(char *str, int *array);
void	push(char *str, t_stack *s);
void	rotate(int *array, int size, char *direction, char *list);




#endif
