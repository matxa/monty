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
    char **commands;
    struct stat st;
    long int buf_size;
    int i = 0;

    if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];
	if (stat(file_name, &st) == 0)
		buf_size = st.st_size;

    commands = malloc(sizeof(char *) * buf_size);
    commands = parse_f(file_name);
    while (commands[i] != NULL)
	{
		printf("%s\n", commands[i]);
        i++;
	}
	return (1);
}
