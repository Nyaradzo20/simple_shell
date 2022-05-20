#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NEWLINE " \t\r\n"
#define TIME "\033[0;31m"
#define STARTAGAIN "\e[0m"

char *getline();
char **split_line(char *);
unsigned int check_delim(char c, const char *str);
int _exit(char **);
int _execute(char **);
char *_strtok(char *str, const char *delim);
  
#endif
