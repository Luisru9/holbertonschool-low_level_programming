#include "main.h"
/**
 *read_textfile - reads a file and prints to the stdout
 *@filename: points to the file name
 *@letters: the number of letters to read and print
 *Return: number of letter it read and printed or -1 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	int Fd, n;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL)
		return (0);

	Fd = open(filename, O_RDONLY);
	if (Fd == -1)
		return (0);

	n = read(Fd, buff, letters);
	buff[letters + 1] = '\0';

	write(STDOUT_FILENO, buff, n);

	free(buff);
	close(Fd);
	return (n);
}
