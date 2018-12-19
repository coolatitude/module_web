#include "components/animated_text_line.h"

animated_text_line	*animated_text_line_create(char *content, int speed, int loop)
{
	animated_text_line	*text;

	if ((text = malloc(sizeof(animated_text_line))) == NULL)
		return NULL;

	text->_content = content;
	text->speed = speed;
	text->loop = loop;
	text->start_at = 0;

	text->align = LEFT;
	text->_current_char = 0;
	text->_char_count = ft_strlen(text->_content);
	text->_time = 0;
	text->position.x = 0;
	text->position.y = 0;

	return (text);
}

void			animated_text_line_refresh(animated_text_line *text)
{
	char *cpy;

	if (text == NULL || text->_content == NULL)
		return ;

	if (text->_current_char >= text->_char_count)
	{
		if (!text->loop)
		{
			print_formated_text(text->_content, text->align, text->position.y, text->position.x);
			return ;
		}
		text->_current_char = 0;
	}

	if (text->_current_char < text->start_at)
		text->_current_char = text->start_at;

	text->_time += get_delta_time();
	if (text->_time >= text->speed * 1000)
	{
		text->_current_char += text->_time / (text->speed * 1000);
		text->_time = 0;
	}

	if ((cpy = ft_strnew(text->_current_char + text->start_at + 1)) == NULL)
		return;
	cpy = ft_strncpy(cpy, text->_content, text->_current_char + 1);
	print_formated_text(cpy, text->align, text->position.y, text->position.x);
	ft_strdel(&cpy);
}
