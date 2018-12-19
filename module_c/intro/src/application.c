#include "application.h"

static clock_t			delta_time;
static clock_t			old_time;
static t_language		app_lang;

void		init_app()
{
	char **lang_text;
	old_time = clock();
	delta_time = 0;

	lang_text = load_text_file(CONF_LANG_FILE);

	if (lang_text == NULL || lang_text[0] == NULL || strncmp(lang_text[0], "en", 2) == 0)
		app_lang = EN;
	else if (strncmp(lang_text[0], "fr", 2) == 0)
		app_lang = FR;
	else if (strncmp(lang_text[0], "nl", 2) == 0)
		app_lang = NL;
	else if (strncmp(lang_text[0], "de", 2) == 0)
		app_lang = DE;
	else
		app_lang = EN;
}

void		refresh_delta_time()
{
	delta_time = clock() - old_time;
	if (delta_time > 0)
		old_time = clock();
}

unsigned int			get_delta_time()
{
	return delta_time * 1000000 / CLOCKS_PER_SEC;
}

unsigned int			get_delta_time_ms()
{
	return (get_delta_time() / 1000);
}

t_language				get_app_language()
{
	return (app_lang);
}
