#ifndef INTRO_H
# define INTRO_H

# include "vectors.h"
# include "sprite.h"
# include "application.h"
# include "states/welcome_state.h"
# include "states/intro_state.h"
# include <ncurses.h>
# include <fcntl.h>


typedef unsigned char	boolean;

char	**ft_load_file(const char *file_path);
int		ft_extract_info(char *info_line, int info);
void	ft_clean(char **file_content, int content_size);
t_animated_sprite	*ft_split_content(char **file_content);
void	ft_add_sprite(t_animated_sprite *animated_list, char **file_content, int x, int y);

#endif
