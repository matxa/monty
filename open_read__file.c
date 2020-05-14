#include "monty.h"

/**
 * open_read_file - open and reads file
 * @file_name: file name
 * Return: file file content
 */

char *read_parse(char *file_name)
{
	FILE *fp;
    char* list_tokens[64];
	char **line;
    char *token;
    int i = 0;
    int b = 0;

    fp = fopen(file_name, "r");
    if (!fp)
    {
        fprintf(stderr,"Error: Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    while (!feof(fp))
    {
        fgets(*line, 64, fp);
        token = strtok(*line, "\n");
        while (!token)
        {
            list_tokens[i] = token;
            token = strtok(NULL, "\n");
            i++;
        }
    }
    while (b < i)
    {
        printf("%s\n", list_tokens[i]);
        b++;
    }

	fclose(fp);
	return (*list_tokens);
}
