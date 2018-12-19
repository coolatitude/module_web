#ifndef ANIMATED_BORDER_BOX_H
#define ANIMATED_BORDER_BOX_H

#include "vectors.h"
#include "application.h"
#include <stdlib.h>
#include <ncurses.h>

typedef struct	s_animated_border_box
{
	vector2d		position;
	vector2d		size;
	unsigned int	speed;
	unsigned int	border_len_percent;
	char			*theme[4];

	int				_current_char;
	int				_total_char_count;
	int				_border_char_count;
	unsigned int	_time;
}				animated_border_box;

animated_border_box	*animated_border_box_create(vector2d size,
	int border_len_percent, int speed);
void				animated_border_box_refresh(animated_border_box *box);
#endif
