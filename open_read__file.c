#include "monty.h"

/**
 * open_read_file - open and reads file
 * @file_name: file name
 * Return: file file content
 */

char *read_parse(char *file_name)
{
	FILE *fp;
	char *line;
    char *token;
    int i = 0;

    fp = fopen(file_name, "r");
    if (!fp)
    {
        fprintf(stderr,"Error: Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    while (!feof(fp))
    {
        line = fgets(line, 64, fp);
        token = strtok(line, "\n");
        while (!token)
        {
            token = strtok(NULL, "\n");
            i++;
        }
    }
	fclose(fp);
	return (token);
}
