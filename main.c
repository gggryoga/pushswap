int main(int argc,char **argv)
{
	int i;
	t_stuck *a;
	t_stuck *b;

	if(argc <= 2)
	{
		if (argc == 2)
			error_argc2(argv[1]);
		else
			return (0);	
	}
	t_stuck a = (t_list*)calloc(sizeof(t_list));
	if (a == NULL)
		return (0);
	t_stuck b = (t_list*)calloc(sizeof(t_list));
	if (b == NULL)
	{
		free (a);
		return (0);
	}
	i = 0;
	while (i < argc)
	{
		ft_lstnew(argv[i]);
		ft_lstadd_back();
	}
}

sa;

ab;
ss;


