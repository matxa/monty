#include "monty.h"

/**
 * open_read_f - open and reads file
 * @file_name: file name
 * Return: file file content
 */

char *read_f(char *file_name)
{
	FILE *fp;
    char *buffer;
    long int buf_size;
    struct stat st;

    if(stat(file_name,&st)==0)
         buf_size = st.st_size;

    buffer = malloc(sizeof(char) * buf_size);
    if (!buffer)
    {
        perror("Error: malloc failed");
        exit(EXIT_FAILURE);
    }

    fp = fopen(file_name, "r");
    if (!fp)
    {
        fprintf(stderr,"Error: Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    fread(buffer, sizeof(char), buf_size, fp);

	fclose(fp);
	return (buffer);
}

/**
 * parse_f - parse buffer
 * @buffer: array of chars
 * @file_name:file name
 * Return: file file content
 */

char *parse_f(char *buffer, char *file_name)
{
    char *token;
    int i = 0

    if(stat(file_name,&st)==0)
         buf_size = st.st_size;
    buffer = malloc(sizeof(char) * buf_size);
    printf("%s\n", buffer);

    token = strtok(buffer, " \n");
    while (!token)
    {
        token = strtok(NULL, " \n");
        print("%d:  %s\n", i, token);
        i++;
    }
    return (buffer);
}
