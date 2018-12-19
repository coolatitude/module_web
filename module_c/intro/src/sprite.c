#include "sprite.h"

t_sprite	*load_sprite(char *filename)
{
	t_sprite *sprite;

	if ((sprite = malloc(sizeof(t_sprite))) == NULL)
		return (NULL);

	sprite->content = load_text_file(filename);
	sprite->position.x = 0;
	sprite->position.y = 0;

	return (sprite);
}

void		print_sprite(t_sprite *sprite)
{
	int line;
	int col;


	if (sprite->content == NULL)
		return ;
	line = 0;
	while (sprite->content[line] != NULL)
	{
		col = 0;
		while (sprite->content[line][col] != 0)
		{
			mvaddch(sprite->position.y + line, sprite->position.x + col, sprite->content[line][col]);
			col++;
		}
		line++;
	}
}
