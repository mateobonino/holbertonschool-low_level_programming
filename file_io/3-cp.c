#include "main.h"
void readFunc(char *a, char *b);
int checkFile(char *a);
/*void appendFunc(char *a, char *b);*/
void truncateFunc(char *a, char *b, char *c);

int main(int argc, char *argv[])
{
	char *arg1 = argv[1], *arg2 = argv[2];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	if (checkFile(arg1) != 1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if (checkFile(arg2) != 1)
	{
		readFunc(arg1, arg2);
	}
	else
	{
		/*appendFunc(arg1, arg2);*/
	}
	return (0);
}

void readFunc(char *file_from, char *file_to)
{
	/*Read the first file*/
	int clous = 0, file_desc = 0, read_val = 0;
	char *buff;

	file_desc = open(file_from, O_RDONLY);
	if (!file_to || file_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buff = malloc(1024);
	if (!buff)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit (98);
	}
	read_val = read(file_desc, buff, 1024);
	if (read_val == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit (98);
	}
	clous = close(file_desc);
	if (clous == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", clous);
		exit(100);
	}
	truncateFunc(file_from, file_to, buff);/*Truncate to file_from*/
}

void truncateFunc(char *f_from, char *f_to, char *bf)
{
	/*Truncate to file*/
	int wr2 = 0, read2 = 0, file2 = 0, buff_len, close2 = 0;

	file2 = open(f_to, O_APPEND | O_WRONLY, 0600);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	for (buff_len = 0; bf[buff_len] != '\0'; buff_len++)
		;
	wr2 = write(file2, bf, buff_len);
	if (wr2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	close2 = close(file2);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close2);
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
