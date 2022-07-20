#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int wr = 0, file_desc = 0, ret = 0;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_APPEND | O_WRONLY | O_CREAT, 0600);
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
