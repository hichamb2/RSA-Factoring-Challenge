#include "main.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int factorize(char *buff)
{
	u_int32_t number, i;

	/*num = atoi(buffer);*/
	number = strtoul(buff, NULL, 10);
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			printf("%u=%u*%u\n",number,number/i,i);
			break;
		}
	}
	return (0);
}