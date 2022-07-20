#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX STDOUT
* @letters: numbers of letters it should read and print
* @filename: the name of the file
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int wr, file_desc, read_val;
	char *buff;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);
	buff = malloc(letters);
	if (!buff)
	{
		free(buff);
		return (0);
	}
	read_val = read(file_desc, buff, letters);
	if (!read_val)
	{
		free(buff);
		return (0);
	}
	wr = write(SFNO, buff, read_val);
	if (wr == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(file_desc);
	return (wr);
}
