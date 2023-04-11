#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints to POSIX stdout
 * @filename: Points to the name of the file
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 *         Otherwise if it fails or filename is NULL - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t fn, wr, tn;
fn = open(filename, O_RDONLY);
if (fn == -1)
return (0);
buff = malloc(sizeof(char) * letters);
tn = read(fn, buff, letters);
wr = write(STDOUT_FILENO, buff, tn);
free(buff);
close(fn);
return (wr);
}
