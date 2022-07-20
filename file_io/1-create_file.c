#include "main.h"
/**
* create_file - creates a file
* @filename: the name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
	int wr = 0, file_desc = 0, ret = 0;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);
	if (file_desc == -1)
		return (-1);
	for (; text_content != NULL && text_content[ret] != '\0'; ret++)
		;
	wr = write(file_desc, text_content, ret);
	if (wr == -1)
		return (-1);
	close(file_desc);
	return (1);


}
