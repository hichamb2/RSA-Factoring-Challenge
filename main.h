#ifndef _FACTOR_H_
#define _FACTOR_H_

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE


/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buff);

#endif /* _FACTOR_H_ */
