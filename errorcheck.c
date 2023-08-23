#include "push_swap.h"

int error_argc2(char *h)
{
	int ans;
	ans = ft_atoi(h);
	return (ans);
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