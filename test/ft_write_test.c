#include "libasm.h"

void    print_ft_write(int fd, const char *str) {
    ssize_t my_write_result;
    ssize_t write_result;
    int my_write_ernno = 0;
    int write_ernno = 0;
    size_t len = strlen(str);

    printf("str: %s\n", str);

    my_write_result = ft_write(fd, str, len);
    if (my_write_result == -1) {
        printf("ft_write failed\n");
        my_write_ernno = errno;
    } else
        printf("ft_write success: %ld bytes written\n", my_write_result);

    write_result = write(fd, str, len);
    if (write_result == -1) {
        printf("write failed\n");
        write_ernno = errno;
    } else
        printf("write success: %ld bytes written\n", write_result);

    if (write_result == my_write_result && my_write_ernno == write_ernno)
        printf(GREEN"Success\n\n"END);
    else
        printf(RED"Failure\n\n"END);
}

void ft_write_test() {
    
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return;


    print_ft_write(fd, "");
    print_ft_write(fd, "Hello, world!\n");
    print_ft_write(fd, "A\n");
    print_ft_write(fd, "1234567890\n");
    print_ft_write(fd, "!@#$^&*()_+\n");
}