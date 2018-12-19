#ifndef WELCOME_STATE_H
# define WELCOME_STATE_H

#include "components/animated_border_box.h"
#include "components/animated_text_line.h"
#include "application.h"
#include "text_format.h"
#include "sprite.h"
#include <ncurses.h>

int		welcome_state_execute(void);
void	welcome_state_refresh(void);

#endif
