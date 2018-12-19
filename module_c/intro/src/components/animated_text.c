#include "components/animated_text.h"

animated_text	*animated_text_create(char **content, int speed, int loop)
{
	animated_text	*text;

	if ((text = malloc(sizeof(animated_text))) == NULL)
		return NULL;

	text->_content = content;
	text->speed = speed;
	text->loop = loop;
	text->start_at = 0;

	text->align = LEFT;
	text->_current_char = 0;
	text->_current_line = 0;
	text->_time = 0;
	text->position.x = 0;
	text->position.y = 0;

	return (text);
}

void			animated_text_refresh(animated_text *text)
{
	char *cpy;
	int i;

	if (text == NULL || text->_content == NULL || text->_content[0] == NULL)
		return ;

	/*
	if (text->_current_char < text->start_at)
		text->_current_char = text->start_at;
		TODO: start_at feature
	*/

	text->_time += get_delta_time();
	if (text->_time >= text->speed * 1000)
	{
		text->_current_char += text->_time / (text->speed * 1000);
		text->_time = 0;

		if (text->_content[text->_current_line][text->_current_char] == 0)
		{
			if (text->_content[text->_current_line + 1] != NULL)
			{
				text->_current_line++;
				text->_current_char = 0;
			}
			else if (text->loop)
			{
				text->_current_char = 0;
				text->_current_line = 0;
			}
		}

	}
	i = 0;
	while (i < text->_current_line)
	{
		print_formated_text(text->_content[i], text->align, text->position.y + i, text->position.x);
		i++;
	}

	if ((cpy = ft_strnew(text->_current_char + /*text->start_at +*/ 1)) == NULL)
		return;
	cpy = ft_strncpy(cpy, text->_content[text->_current_line], text->_current_char + 1);
	print_formated_text(cpy, text->align, text->position.y + i, text->position.x);
	ft_strdel(&cpy);
}
