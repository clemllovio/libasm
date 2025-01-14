#ifndef _LIBASM_H
#define _LIBASM_H

#include <stdio.h>
#include <string.h>

extern int ft_strlen(const char *str);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);

void	ft_strlen_test();
void	ft_strcpy_test();
void	ft_strcmp_test();

#endif