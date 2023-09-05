#include "main.h"
/**
 * read_textfile - it reads a text from a file and print it.
 * @filename: file name.
 * @letters: num of letters.
 * Return: num of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{ssize_t r, fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	printf("%s", buf);
	free(buf);
	close(fd);
	return (r);
}
