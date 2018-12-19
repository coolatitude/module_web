#include "main_menu.h"

void	initialize_ncurses(void)
{
	initscr();
	start_color();
	noecho();
	curs_set(0);
}

char	set_language(int ac, char **av)
{
	char lang;

	lang = EN;
	if (ac > 1)
	{
		mvprintw(0,0, "strcmp = %d\n%d", strcmp(av[1], "nl"), !strcmp(av[1], "nl"));
		if (!strcmp(av[1], "en"))
			lang = EN;
		else if (!strcmp(av[1], "fr"))
			lang = FR;
		else if (!strcmp(av[1], "nl"))
			lang = NL;
		mvprintw(0,0, "%d", lang);
	}
	return (lang);
}
