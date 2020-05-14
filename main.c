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
    char *file_content;

    if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];
    if(stat(file_name,&st)==0)
         buf_size = st.st_size;
    file_content = malloc(sizeof(char) * buf_size);
    file_content = read_f(file_name);
    printf("%s\n", file_content);

    free(file_content);
	return (1);
}
