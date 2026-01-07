#ifndef PROTOTYPES_H
#define PROTOTYPES_H

#include <unistd.h>
#include <stdlib.h>

// Job01
void my_putchar(char c);
void my_putstr(char *str);

// Job02
int my_strlen(char *str);

// Job03
int char_is_digit(char c);
int str_is_digit(char *str);

// Job04
char *my_strcpy(char *dest, char *src);

// Job05
char *my_strdup(char *str);

// Job06
int my_strcmp(char *s1, char *s2);

// Job07
char *trim(char *src);

// Job08
char **split(char *str);

// Bonus Job09
void my_putnbr(int nb);

#endif
