#ifndef LOADING_H
#define LOADING_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../../libft/libft.h"

# define BUFFER_SIZE 1024

char	**load_text_file(char *filename);
char	*load_file(char *filename);

#endif
