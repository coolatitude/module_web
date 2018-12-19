#include "states/welcome_state.h"

static animated_border_box	*welcome_box;
static animated_text_line		*press_key_text;
static t_sprite				*sprite_19;
static char 				**strings = NULL;

int		welcome_state_execute(void)
{
	int input;
	timeout(0);

	if (get_app_language() == DE)
		strings = load_text_file("../data/docs/de/welcome");
	else if (get_app_language() == FR)
		strings = load_text_file("../data/docs/fr/welcome");
	else if (get_app_language() == NL)
		strings = load_text_file("../data/docs/nl/welcome");
	else
		strings = load_text_file("../data/docs/en/welcome");

	if (strings == NULL)
		return (-1);

	vector2d box_size = { 70, 30 };
	welcome_box = animated_border_box_create(box_size, 20, 8);
	welcome_box->position.x = COLS/2 - 35;
	welcome_box->position.y = LINES/2 - 22;
	welcome_box->theme[0] = "-";
	welcome_box->theme[1] = "|";
	welcome_box->theme[2] = "-";
	welcome_box->theme[3] = "|";

	press_key_text = animated_text_line_create(strings[2], 500, 1);
	press_key_text->align = CENTER;
	press_key_text->start_at = strlen(strings[2]) - 2;
	press_key_text->position.x = COLS/2;
	press_key_text->position.y = LINES/2 + 2;

	sprite_19 = load_sprite("../data/assets/logo_19");
	sprite_19->position.x = COLS/2 - 25;
	sprite_19->position.y = LINES/2 - 26;

	input = 0;
	while (input == ERR || input == 0 || input == KEY_RESIZE)
	{
		refresh_delta_time();
		input = getch();
		if (input == KEY_RESIZE)
		{
			welcome_box->position.x = COLS/2 - 35;
			welcome_box->position.y = LINES/2 - 22;
			press_key_text->position.x = COLS/2;
			press_key_text->position.y = LINES/2 + 2;
			sprite_19->position.x = COLS/2 - 25;
			sprite_19->position.y = LINES/2 - 26;
		}

		welcome_state_refresh();
	}

	return (0);
}

void	welcome_state_refresh(void)
{
	erase();
	print_formated_text(strings[0], CENTER, LINES/2, COLS/2);
	print_formated_text(strings[1], CENTER, LINES/2 + 1, COLS/2);

	animated_border_box_refresh(welcome_box);
	animated_text_line_refresh(press_key_text);
	print_sprite(sprite_19);

	move(0,0);
	refresh();
}
