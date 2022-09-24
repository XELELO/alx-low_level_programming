<<<<<<< HEAD
#include "holberton.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);

	close(fd);
	return (1);
=======




#include "main.h"



/**
 *
 *  * append_text_to_file - appends text at the end of a file
 *
 *   * @filename: path of the file
 *
 *    * @text_content: content to append at end of file
 *
 *     * Return: 1 on Success, -1 on failure
 *
 *      */

int append_text_to_file(const char *filename, char *text_content)

{

		int count, len = 0, fd, i;



			if (filename == NULL)

						return (-1);



				/* Open file and get file descriptor */

				fd = open(filename, 2 | O_APPEND, 0600);

					if (fd == -1)

								return (-1);



						if (text_content == NULL)

									return (1);



							for (i = 0; text_content[i]; i++)

										len++;



								/* write into file description */

								count = write(fd, text_content, len);

									if (count == -1)

											{

														close(fd);

																return (-1);

																	}

										close(fd);



											return (1);

>>>>>>> dd2bad3e88a9966b84c03ae23ff2e86694e2a5a2
}
