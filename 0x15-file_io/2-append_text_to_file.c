#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - it append text to the end of the file.
 * @filename: name of file.
 * @text_content: str will be appended.
 * Return: 1 if succeeded -1 if failed.
*/
int append_text_to_file(const char *filename, char *text_content)
{int fd, len, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	len = strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
