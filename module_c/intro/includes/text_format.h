#ifndef TEXT_FORMAT_H
#define TEXT_FORMAT_H

#include "../../libft/libft.h"
#include "vectors.h"
#include <ncurses.h>

typedef enum	e_text_align
{
	LEFT,
	CENTER,
	RIGHT
}				text_align;

typedef enum	e_text_vectical_align
{
	TOP,
	MIDDLE,
	BOTTOM
}				text_vectical_align;

typedef struct	s_text_format
{
	text_align			align;
	text_vectical_align	vectical_align;
}				text_format;

void print_formated_text(char *text, text_align alignement, int y, int x);

#endif
