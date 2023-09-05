#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - it creates a file and write a str in.
 * @filename: name of the file.
 * @text_content: content wich will be written in the file.
 * Return: -1 if failed 1 if succeeded.
*/
int create_file(const char *filename, char *text_content)
{int fd, len, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	len = strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
