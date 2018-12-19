#ifndef ANIMATED_TEXT_H
#define ANIMATED_TEXT_H

#include "vectors.h"
#include "text_format.h"
#include "application.h"
#include "../../libft/libft.h"
#include <stdlib.h>

typedef struct	s_animated_text
{
	vector2d		position;
	text_align		align;
	int				speed;
	int				loop;
	int				start_at;

	int				_current_char;
	int				_current_line;
	int				_char_count;
	char			**_content;
	unsigned int	_time;
}				animated_text;

animated_text	*animated_text_create(char **content, int speed, int loop);
void			animated_text_refresh(animated_text *text);

#endif
