#ifndef FUNC_POINTERS
#define FUNC_POINTERS

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
#endif
