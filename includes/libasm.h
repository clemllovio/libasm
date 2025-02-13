#ifndef _LIBASM_H
# define _LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

# define END "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"

extern int ft_strlen(const char *str);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern ssize_t ft_write(int fd, const void *buf, size_t count);
extern ssize_t ft_read(int fd, void *buf, size_t count);
extern char *ft_strdup(const char *s);

void	ft_strlen_test();
void	ft_strcpy_test();
void	ft_strcmp_test();
void	ft_write_test();
void	ft_read_test();
void	ft_strdup_test();

#endif