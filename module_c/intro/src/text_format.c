#include "text_format.h"

void print_formated_text(char *text, text_align alignement,
	int y, int x)
{
	if (alignement == CENTER)
		x -= ft_strlen(text)/2;
	else if (alignement == RIGHT)
		x -= ft_strlen(text);

	mvprintw(y, x, text);
}
