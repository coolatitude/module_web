#include "intro.h"

int	main(int argc, char **argv)
{
	initscr();
	start_color();
	noecho();
	raw();

	init_app();

	welcome_state_execute();
	intro_state_execute();

	endwin();
	/*
	char	**test;
	int		content_size;
	int		i;


	test = ft_load_file("test.att");
	content_size = ft_extract_info(*test, 1) * ft_extract_info(*test, 2) + 1;
	i = 0;
	while(i < content_size)
	{
		ft_putendl(*(test + i));
		i = i + 1;
	}
	ft_clean(test, content_size);
	return (0);*/
}
