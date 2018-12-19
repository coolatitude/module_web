#include "states/intro_state.h"

static t_sprite			*sprite_owl;
static animated_text	*intro_text;

int		intro_state_execute(void)
{
	int input;
	timeout(0);

	sprite_owl = load_sprite("../data/assets/intro/owl");
	sprite_owl->position.x = COLS/2 - 60;
	sprite_owl->position.y = LINES/2 - 20;

	if (get_app_language() == DE)
		intro_text = animated_text_create(load_text_file("../data/docs/de/intro"), 30, 0);
	else if (get_app_language() == FR)
		intro_text = animated_text_create(load_text_file("../data/docs/fr/intro"), 30, 0);
	else if (get_app_language() == NL)
		intro_text = animated_text_create(load_text_file("../data/docs/nl/intro"), 30, 0);
	else
		intro_text = animated_text_create(load_text_file("../data/docs/en/intro"), 30, 0);

	intro_text->position.x = COLS/2;
	intro_text->position.y = LINES/2 - 20;

	input = 0;
	while (input != 'q')
	{
		refresh_delta_time();
		input = getch();

		if (input == KEY_RESIZE)
		{
			intro_text->position.x = COLS/2;
			intro_text->position.y = LINES/2 - 20;
			sprite_owl->position.x = COLS/2 - 60;
			sprite_owl->position.y = LINES/2 - 20;
		}
		else if (input != 0 && input != ERR)
			intro_text->speed = 3;
		intro_state_refresh();
	}

	return (0);
}

void	intro_state_refresh(void)
{
	erase();
	print_sprite(sprite_owl);
	animated_text_refresh(intro_text);
	refresh();
}
