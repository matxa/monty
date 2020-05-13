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
    char **tokens;
	unsigned int i;
    long int n;

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
    n = file_size.st_size;
	printf("file size is - %ld\n", n);
	printf("\n");
    printf("%ld\n", n);

    tokens = malloc(sizeof(char *) * 4024);
    if (tokens == NULL)
    {
        perror("Error: malloc failed");
        exit(EXIT_FAILURE);
    }
    tokens = parser(file_content, n);
    printf("%s\n", *tokens);

	return (1);
}
