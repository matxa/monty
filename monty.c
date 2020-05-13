#include "monty.h"

/**
* main - main monty function
* @argc: num of args
* @argv: file to read from
* Return: success or fail
*/

int main(int argc, char **argv)
{
    char *arg_num = "Usage ./monty file_name.m";
    char *file_name;
    char *file_content;
    unsigned int i;

    if (argc != 2)
    {
        printf("%s", arg_num);
        return (-1);
    }
    file_name = argv[1];

    file_content = open_read_file(file_name);
    for (i = 0; i < strlen(file_content); i++)
    {
        printf("%c", file_content[i]);
    }
    printf("\n");
    return (1);
}
