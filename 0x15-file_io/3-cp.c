#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: Name of the file buffer
 * Return: Newly allocated buffer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
int cl;
cl = close(fd);
if (cl == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - copies content of a file to another file
 * @argc: Number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 on success
 * Description: if the argument count is incorrect - exit code 97
 *              if file_from does not exist or cannot be read - exit code 98
 *              if file_to cannot be created or written to - exit code 99
 *              if file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
int fro, to, re, wr;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO,
"Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
fro = open(argv[1], O_RDONLY);
re = read(fro, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (fro == -1 || re == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
wr = write(to, buffer, re);
if (to == -1 || wr == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
re = read(fro, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (re > 0);
free(buffer);
close_file(fro);
close_file(to);
return (0);
}
