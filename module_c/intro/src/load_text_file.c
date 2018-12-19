#include "loading.h"

char **load_text_file(char *filename)
{
	int fd;
	int r_bytes;
	int curr_len;
	char buffer[BUFFER_SIZE];
	char *content;

	if (filename == NULL)
		return (NULL);

	memset((char *)buffer, 0, BUFFER_SIZE);
	content = ft_strnew(0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);

	while ((r_bytes = read(fd, &buffer, BUFFER_SIZE)) > 0)
	{
		curr_len = strlen(content);
		content = realloc(content, curr_len + r_bytes + 1);
		if (content == NULL)
			return (NULL);
		strlcat(content, buffer, curr_len + r_bytes + 1);
		content[curr_len + r_bytes] = 0;
	}
	if (r_bytes < 0)
	{
		free (content);
		return (NULL);
	}

	return (ft_strsplit(content, '\n'));
}

char	*load_file(char *filename)
{
	int fd;
	int r_bytes;
	int curr_len;
	char buffer[BUFFER_SIZE];
	char *content;

	if (filename == NULL)
		return (NULL);

	memset((char *)buffer, 0, BUFFER_SIZE);
	content = ft_strnew(0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);

	while ((r_bytes = read(fd, &buffer, BUFFER_SIZE)) > 0)
	{
		curr_len = strlen(content);
		content = realloc(content, curr_len + r_bytes + 1);
		if (content == NULL)
			return (NULL);
		strlcat(content, buffer, curr_len + r_bytes + 1);
		//content[curr_len + r_bytes] = 0;
	}
	if (r_bytes < 0)
	{
		free (content);
		return (NULL);
	}

	return (content);
}
