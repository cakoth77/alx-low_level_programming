#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - function that creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write
 *                to the file
 * Return: 1 on success
 *         -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fn, wr, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fn, text_content, len);
if (fn == 1 || wr == -1)
return (-1);
close(fn);
return (1);
}
