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
	unsigned int i;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];

	file_content = open_read_file(file_name);
	for (i = 0; i < file_size.st_size; i++)
	{
		printf("%c", file_content[i]);
	}
    int i = 0;

    char *token = strtok(file_content, " \n");
	while (token != NULL)
	{
		i++;
		token = strtok(NULL, " \n");
        printf("%d: [%p] --- %s\n", i, token, token);
	}
    printf("\n");
    printf("The while loop counted %d tokens\n", i);

	return (1);
}
