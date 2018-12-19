#include "intro.h"

int	main(int argc, char **argv)
{
	initscr();
	start_color();
	noecho();
	raw();

	init_app();

	welcome_state_execute();

	endwin();
	return (0);
}
