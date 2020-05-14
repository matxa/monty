#include "monty.h"

/**
 * open_read_file - open and reads file
 * @file_name: file name
 * Return: file file content
 */

char *read_parse(char *file_name)
{
    if(stat(file_name,&st)==0)
         buf_size = st.st_size;
    printf("%d\n", buf_size);

	FILE *fp;
    int count
    char buffer[buf_size];
    long int buf_size;
    struct stat st;

    fp = fopen(file_name, "r");
    if (!fp)
    {
        fprintf(stderr,"Error: Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }

    count = fread(&buffer, sizeof(char), buf_size, stream);
    printf("%s\n", buffer);
    printf("%d\n", count);
	fclose(fp);
	return (token);
}
