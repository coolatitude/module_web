#include "main_menu.h"

void 	show_credits(char lang)
{
	int pos_y;

	clear();
	pos_y = print_title_credits(lang);
	pos_y = print_credits(pos_y);
}

void 	main_loop(char	**txt, char lang)
{
	unsigned int	c;
	char			screen;

	screen = MAIN;
	while (screen)
	{
		c = getch();
		if (c == 'q')
		{
			if (screen == MAIN)
			{
				screen = QUIT;
				clear();
				endwin();
			}
			else
			{
				refresh_screen(txt);
				screen = MAIN;
			}
		}
		else if (c == '1' && screen == MAIN)
		{
			launch_c(lang);
			screen = QUIT;
		}
		else if (c == '2' && screen == MAIN)
		{
			launch_shell(lang);
			screen = QUIT;
		}
		else if (c == '3' && screen == MAIN)
			launch_web(lang);
		else if (c == '4' && screen == MAIN)
		{
			screen = CREDITS;
			show_credits(lang);
		}
		else if (c == KEY_RESIZE)
			refresh_screen(txt);
	}
}

int		main(int ac, char **av)
{
	char 	lang;
	char	**txt;

	lang = set_language(ac, av);
	txt = set_texts(lang);

	initialize_ncurses();
	refresh_screen(txt);

	main_loop(txt, lang);
}
