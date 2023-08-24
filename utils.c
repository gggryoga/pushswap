#include "push_swap.h"

void make_stack_head(int argc,char **argv,t_stack *s)
{
	int i;

	s->a_size = 0;
	s->b_size = 0;
	while (i < argc - 1)
	{
		if (len_words(argv[i + 1]))
			s->a_size += len_words(argv[i + 1]);
		else
			s->a_size ++;
		i ++; 
	}
	
}

int len_words(const char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		if (*s != ' ')
		{
			len++;
			while (*s != ' ' && *s)
				s++;
		}
		else
			s++;
	}
	return (len);
}