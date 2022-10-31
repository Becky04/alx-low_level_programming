#include "main.h"
/**
 * append_text_to_file - adds text at EOF
 * @filename: file to append data to
 * @text_content: data to append to file
 *
 * Return: 1 of successfull else -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fild = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);
	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		chk = write(fild, text_content, i);
		if (chk < 0)
			return (-1);
	}
	close(fild);
	return (0);
}
