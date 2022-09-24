<<<<<<< HEAD
#include "holberton.h"

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input_fd, output_fd, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_fd = open(av[1], O_RDONLY);
	if (input_fd == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		istatus = read(input_fd, buf, MAXSIZE);
		if (istatus == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (istatus > 0)
		{
			ostatus = write(output_fd, buf, (ssize_t) istatus);
			if (ostatus == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (istatus > 0);
	istatus = close(input_fd);
	if (istatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_fd), exit(100);
	ostatus = close(output_fd);
	if (ostatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output_fd), exit(100);
	return (0);
=======
#include "main.h"



/**
 *
 *  * close_file - close file and check if was succesfull
 *
 *   * @fd: file descriptor
 *
 *    */

void close_file(int fd)

{

		if (close(fd) == -1)

				{

							dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

									exit(100);

										}

}



/**
 *
 *  * error_handler - returns respective exit status
 *
 *   * @fd: file descriptor
 *
 *    * @fname: file descriptor
 *
 *     * @type: type of sys call
 *
 *      * @buffer: buffer to be free if exit status
 *
 *       * Return: 0 on success, exit status on error
 *
 *        */

int error_handler(int fd, char *fname, int type, char *buffer)

{

		int status = 0;

			(void)fd;



				switch (type)

						{

								case READ_ERROR:

											dprintf(STDERR_FILENO,

																"Error: Can't read from file %s\n", fname);

													if (buffer != NULL)

																	free(buffer);

															status = 98;

																	break;

																		case WRITE_ERROR:

																			dprintf(STDERR_FILENO,

																								"Error: Can't write to %s\n", fname);

																					if (buffer != NULL)

																									free(buffer);

																							status = 99;

																									break;

																										default:

																											break;

																												}

					return (status);

}



/**
 *
 *  * create_buffer - allocates a buffer of BUFFERSIZE
 *
 *   * @fileName: file dest to print error
 *
 *    * Return: pointer to new allocated buffer
 *
 *     */

char *create_buffer(char *fileName)

{

		char *buffer;



			buffer = malloc(sizeof(char) * BUFFERSIZE);

				if (buffer == NULL)

						{

									dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);

											exit(99);

												}

					return (buffer);

}



/**
 *
 *  * main - copies contents of 1 file to another
 *
 *   * @argc: number of parameters
 *
 *    * @argv: array of string parameters
 *
 *     * Return: 0 (Success)
 *
 *      */

int main(int argc, char **argv)

{

		int fd_src, fd_dest, res;

			char *buffer;



				(void)argc;

					if (argc != 3)

							{

										dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

												exit(97);

													}



						fd_src = open(argv[1], O_RDONLY);

							if (fd_src < -1)

										exit(error_handler(fd_src, argv[1], READ_ERROR, NULL));



								buffer = create_buffer(argv[2]);



									umask(0);

										fd_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

											if (fd_dest < -1)

														exit(error_handler(fd_dest, argv[2], WRITE_ERROR, buffer));



												do {

															res = read(fd_src, buffer, BUFFERSIZE);

																	if (res == -1)

																					exit(error_handler(res, argv[1], READ_ERROR, buffer));

																			res = write(fd_dest, buffer, res);

																					if (res == -1)

																									exit(error_handler(res, argv[2], WRITE_ERROR, buffer));

																							fd_dest = open(argv[2], O_RDWR | O_APPEND);

																									if (fd_dest == -1)

																													exit(error_handler(fd_dest, argv[2], WRITE_ERROR, buffer));



																										} while (res > 0);

													close_file(fd_src);

													close_file(fd_dest);

														free(buffer);

															return (0);

>>>>>>> dd2bad3e88a9966b84c03ae23ff2e86694e2a5a2
}
