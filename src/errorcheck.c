#include "../push_swap.h"

int check_sorted(t_stack *s)
{
	int i;

	i = 0;
	while (i < s->a_size -1)
	{
		if (s->a[i] > s->a[i + 1])
			return (0);
		i ++;
	}
	return (1);
}

void check_samenum_and_sorted(t_stack *s, int i)
{
	int j;

	j = 0;
	if (i == 0)
	{
		while (i < s->a_size)
		{
			j = i + 1;
			while (j < s->a_size)
			{
				if (s->a[i] == s->a[j])
					error_message_and_free(s,"Error\n");
				j ++;
			}
			i ++;
		}
	}
	if (check_sorted(s))
		error_message_and_free(s,NULL);
}

void check_error(int argc,char **argv)
{
	int i;
	int j;

	if(argc < 2)
		error_message_and_free(NULL,"");
	i = 1;
	while (i++ < argc)
	{
		j = 0;
		if (argv[i][0] == '\0')
			error_message_and_free(NULL,"Error\n");
		while (argv[i][j] != '\0')
		{
			if (((ft_isdigit(argv[i][j]) == 0 && argv[i][j] != ' ' 
			&& argv[i][j] != '-' && argv[i][j] != '+'))
			|| (argv[i][j] == '-' && argv[i][j++] == '\0')
			|| (argv[i][j] == '-' && argv[i][j++] == ' ')
			|| (argv[i][j] == '+' && argv[i][j++] == '\0')
			|| (argv[i][j] == '+' && argv[i][j++] == ' '))
				error_message_and_free(NULL,"Eroor\n");
			j ++;
		}
	}
}

void error_message_and_free(t_stack *s,char *message)
{
    if (message)
        write(2,message,ft_strlen(message));
    if (s != NULL)
    {
        if (s->a != NULL)
            free(s->a);
        if (s->b != NULL)
            free(s->b);
        if (s->join_argv != NULL)
            free(s->join_argv);
        if (s != NULL)
            free (s);
    }
    exit (1);
} 