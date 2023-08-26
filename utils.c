#include "push_swap.h"

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

int	atoi_pusw(const char *nptr, t_stacks *s)
{
	int			i;
	long		sign;
	long long	jdg;

	jdg = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if ((nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i])
	{
		if (jdg > 2147483647 || (jdg * sign) < -2147483648)
			error_message_and_free(s, "Error\n");
		if (!(nptr[i] >= '0' && nptr[i] <= '9'))
			error_message_and_free(s, "Error\n");
		jdg = jdg * 10 + (nptr[i++] - '0');
	}
	return ((int)(jdg * sign));
}

void	make_only_numbers(t_stacks *s)
{
	char	**tmp;
	int		i;
	int		j;

	tmp = ft_split(s->join_args, ' ');
	i = 0;
	j = 0;
	while (tmp[i] != NULL && tmp[i][0] != '\0')
	{
		s->a[z++] = atoi_pusw(tmp[i++], s);
		free(tmp[i - 1]);
	}
	free(tmp);
}


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
	s->a = (t_stack *)malloc(s->a_size * sizeof(t_stack) * s->a);
	if (s->a == NULL)
		error_message_and_free(s,"Error\n");
	s->b = (t_stack *)malloc(s->b_size * sizeof(t_stack) * s->b);
	if (s->b == NULL)
		error_message_and_free(s,"Eroor\n");
}
