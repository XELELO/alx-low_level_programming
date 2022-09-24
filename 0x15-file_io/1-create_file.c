<<<<<<< HEAD
#include "holberton.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstatus = write(fd, text_content, i);
		if (rstatus == -1)
			return (-1);
	}

	close(fd);
	return (1);
=======
#include "main.h"



/**
 *
 *  * create_file - creates a file
 *
 *   * @filename: path of file
 *
 *    * @text_content: content to be write on new file or truncated on existing
 *
 *     * Return: 1 on Success, -1 on failure
 *
 *      */

int create_file(const char *filename, char *text_content)

{

		int count, len = 0, fd;



			if (filename == NULL)

						return (-1);



				/* Open file and get file descriptor */

				fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

					if (fd == -1)

								return (-1);

						if (text_content != NULL)

								{

											while (text_content[len])

															len++;

												}

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
