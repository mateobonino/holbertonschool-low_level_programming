#include "main.h"

void normalError(char *msg, char *fl, int error_num);
void read_print(int a, int b, /*char *c, */char *d, char *e);
/**
* main - checks the code
* @argc: the length of argv
* @argv: array with args
* Return: 0
*/
int main(int argc, char *argv[])
{
	int f_from = 0, f_to = 0, read_val = 0, write_val = 0, close_val = 0;
	char *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(file_from, O_RDONLY, 0600);
	if (f_from == -1)
		normalError("Error: Can't read from file", file_from, 98);
	f_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (f_to == -1)
		normalError("Error: Can't write to", file_to, 99);
	read_print(f_from, f_to, file_from, file_to);
	return (0);
}
/**
* read_print - reads argv[1] and writes its content to argv[2]
* @from: the file descriptor for argv[1]
* @fto: file desc for argv[2]
* @file_f: argv[1]
* @file_t: argv[2]
*/
void read_print(int from, int fto, /*char *buff, */char *file_f, char *file_t)
{
	int read_val = 0, write_val = 0, close1_val = 0, close2_val = 0;
	char *buff[1024];

	read_val = read(from, buff, 1024);
	if (read_val == -1)
		normalError("Error: Can't read from file", file_f, 98);
	write_val = write(fto, buff, read_val);
	if (write_val == -1)
		normalError("Error: Can't write to", file_t, 99);
	close1_val = close(from);
	if (close1_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from);
		exit(100);
	}
	close2_val = close(fto);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fto);
		exit(100);
	}
}
/**
* normalError - prints an error
* @msg: the message to print
* @fl: the file descriptor
* @error_num: the error num
* Return: void function
*/
void normalError(char *msg, char *fl, int error_num)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, fl);
	exit(error_num);
}
