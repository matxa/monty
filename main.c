#include "monty.h"

/**
 * main - main monty function
 * @argc: num of args
 * @argv: file to read from
 * Return: success or fail
 */

int main(int argc, char **argv)
{
	char *file_name;
	char *file_content;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];

	file_content = open_read_file(file_name);

	return (1);
}
