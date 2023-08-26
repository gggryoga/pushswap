#include "push_swap.h"

static void join_argv(int argc, char **argv, t_stack *s)
{
	char *tmp;
	char *tmp2;
	int i;

	tmp2 = ft_strdup("");
	i = 1;
	while (i <argc && argv[i] != NULL)
	{
		tmp = ft_strjoin(tmp2, argv[i]);
		if (tmp2)
			free(tmp2);
		if (i != argc - 1)
		{
			tmp2 = ft_strjoin(tmp, " ");
			if (tmp)
				free(tmp);
			tmp = tmp2;
		}
		i ++;
	}
	s->join_argv = ft_strdup(tmp);
	if (s->join_argv == NULL)
		free_and_exit_with_message(s, "Error\n");
	if (tmp)
		free(tmp);
}

void	create_index(t_stacks *s)
{
	int		i;
	int		j;
	int		k;
	int		*new_a;

	new_a = malloc(s->a_size * sizeof * new_a);
	if (new_a == NULL)
		free_and_exit_with_message(s, "Error\n");
	i = 0;
	while (i < s->a_size)
	{
		k = 0;
		j = 0;
		while (j++ < s->a_size)
			if (s->a[i] > s->a[j])
				k++;
		new_a[i] = k;
		i ++;
	}
	i = s->a_size;
	while (i--)
		s->a[i] = new_a[i];
	free(new_a);
}

int main(int argc,char **argv)
{
	int i;
	t_stack *s;

	check_error(argc,argv);
	s = (t_stack*)malloc(sizeof(t_stack));
	if (s == NULL)
		exit (1);
	i = 0;
	make_stack_head(argc,argv,s);
	join_argv(argc,argv,s);
	make_only_numbers(s);
	check_samenum_and_sorted(s,0);
	create_index(s);
	if (s->a_size == 2 && s->a[0] > s->a[1])
		swap("sa", s->a, s->a_size);
	else if (s->a_size == 3)
		sort_three_elements(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_four_to_five_elements(s);
	else
		radix_sort(s);
	check_samenum_and_sorted(s, 1);
	error_message_and_free(s, "Error\n");
	return (0);
}
