#include "monty.h"

/**
 * open_read_file - open and reads file
 * @file_name: file name
 * Return: file file content
 */

char *open_read_file(char *file_name)
{
	int fd;
	char *file_content;

	fd = open(file_name, O_RDONLY | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		perror("file Descriptor failed");
		exit(-1);
	}
	if (fstat(fd, &file_size) == -1)
	{
		perror("couldn't get file size");
		exit(-1);
	}

	file_content = mmap(NULL, file_size.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (file_name == MAP_FAILED)
	{
		perror("Could not fill up the buffer");
		close(fd);
		exit(-1);
	}

	close(fd);
	return (file_content);
}
