#include "main.h"

/**
 * main - main function
 *
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *file_ptr;
	size_t buff_size;
	ssize_t line;
	char *buff = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	file_ptr = fopen(argv[1], "r");
	if (file_ptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((line = getline(&buff, &buff_size, file_ptr)) != -1)
	{
		factorize(buff);
	}
return (0);
}
