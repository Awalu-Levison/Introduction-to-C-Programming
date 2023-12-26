#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void my_print(const char *text);
void prompt_display(void);
void command_execute(const char *message);

#endif
