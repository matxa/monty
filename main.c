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
    long int buf_size;
    struct stat st;

    if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];
    if(stat(file_name,&st)==0)
        buf_size = st.st_size;

    buffer = malloc(sizeof(char) * buf_size);

    buffer = read_f(file_name);
    char *token = malloc(sizeof(char) * buf_size);

    token = strtok(buffer, " \n");
    printf("[%p] ---> %s\n", token, token);
    while (token != NULL)
    {
        token = strtok(NULL, " \n");
        printf("[%p] ---> %s\n", token, token);
    }
	return (1);
}
