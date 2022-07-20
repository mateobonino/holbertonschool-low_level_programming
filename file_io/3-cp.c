#include "main.h"
/**
*
*
*
*/
int main(int argc, char *argv)
{
	if (argc != 3)
	{
		dprintf(STDDER_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	if (checkFile(*argv[1]) != 1)
	{
		dprintf(STDDER_FILENO, "Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if (checkFile(*argv[2]) != 1)
	{
		readFunc(argv[1], argv[2]);
	}
	else
	{
		appendFunc(argv[1], argv[2]);
	}
	return (0);
}

void readFunc(char *file_from, char *file_to)
{
	/*Read the first file*/
	int clous = 0, file_desc = 0; read_val = 0;
	char *buff[1024];

	file_desc = open(file_from, O_RDONLY);
	if (!file_to || file_desc == -1)
	{
		dprintf(STDDER_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buff = malloc(1024);
	if (!buff)
	{
		free(buff);
		dprintf(STDDER_FILENO, "Error: Can't read from file %s\n", file_from);
		exit (98);
	}
	read_val = read(file_desc, buff, 1024);
	if (read_val == -1)
	{
		free(buff);
		dprintf(STDDER_FILENO, "Error: Can't read from file %s\n", file_from);
		exit (98);
	}
	clouse = close(file_desc);
	if (clouse == -1)
	{
		dprintf(STDDER_FILENO, "Error: Can't close fd %d\n" clouse);
		exit(100);
	}
	truncateFunc(*file_from, *file_to, buff);/*Truncate to file_from*/
}

void truncateFunc(char *f_from, char *f_to, char *bf)
{
	/*Truncate to file*/
	int wr2 = 0, read2 = 0; file2 = 0, buff_len, close2 = 0;

	file2 = open(f_to, O_APPEND | O_WRONLY, 0600);
	if (file2 == -1)
	{
		dprintf(STDDER_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	for (buff_len = 0; bf[len] != '\0'; buff_len++)
		;
	wr2 = write(file2, buff, buff_len);
	if (wr2 == -1)
	{
		dprintf(STDDER_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	close2 = close(file2);
	if (close2 == -1)
	{
		dprintf(STDDER_FILENO, "Error: Can't close fd %d\n", close2);
		exit(100);
	}
}

int checkFile(char *b)
{
	int exists = 0;
	exists = open(b, O_RDONLY);
	if (exists != -1)
	{
		close(exists);
		return (1);
	}
	return (0);
}
