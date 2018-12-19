#ifndef SPRITE_H
#define SPRITE_H

#include "loading.h"
#include "vectors.h"
#include <ncurses.h>

typedef struct	s_sprite
{
	char		**content;
	vector2d	position;
}				t_sprite;

typedef struct	s_animated_sprite
{
	t_sprite		*frames;
	unsigned int	frameCount;
	int 			speed;
	int				loop;
	unsigned int	currentFrame;
	unsigned int	currentTime;
	vector2d		position;
	struct s_animated_sprite	*next;
}				t_animated_sprite;

t_sprite		*load_sprite(char *filename);
void			print_sprite(t_sprite *sprite);

#endif
