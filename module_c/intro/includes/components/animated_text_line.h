#ifndef ANIMATED_TEXT_H
#define ANIMATED_TEXT_H

#include "vectors.h"
#include "text_format.h"
#include "application.h"
#include "../../libft/libft.h"
#include <stdlib.h>

typedef struct	s_animated_text_line
{
	vector2d		position;
	text_align		align;
	int				speed;
	int				loop;
	int				start_at;

	int				_current_char;
	int				_char_count;
	char			*_content;
	unsigned int	_time;
}				animated_text_line;

animated_text_line	*animated_text_line_create(char *content, int speed, int loop);
void			animated_text_line_refresh(animated_text_line *text);

#endif
