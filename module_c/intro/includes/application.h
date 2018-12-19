#ifndef APPLICATION_H
#define APPLICATION_H

#include "loading.h"
#include <time.h>
#include <ncurses.h>

#define CONF_LANG_FILE	"../data/config/language"

typedef enum e_language
{
	FR,
	EN,
	NL,
	DE
}			t_language;

void			init_app();
void			refresh_delta_time();
unsigned int	get_delta_time();
t_language		get_app_language();


#endif
