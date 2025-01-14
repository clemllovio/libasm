#ifndef _LIBASM_H
#define _LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

extern int ft_strlen(const char *str);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern ssize_t ft_write(int fd, const void *buf, size_t count);

void	ft_strlen_test();
void	ft_strcpy_test();
void	ft_strcmp_test();
void	ft_write_test();

#endif