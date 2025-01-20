#include "libasm.h"

void	ft_read_test() {
    char buffer[100];
    ssize_t read_result, my_read_result;
    int my_read_ernno = 0;
    int read_ernno = 0;

    int fd = open("output.txt", O_CREAT | O_RDWR, 0644);
    if (fd == -1) {
        printf("Failed to open file");
        return;
    }

    lseek(fd, 0, SEEK_SET);
    read_result = read(fd, buffer, sizeof(buffer));
    if (read_result == -1) {
        printf("read failed, errno: %d (%s)\n", errno, strerror(errno));
        read_ernno = errno;
    } else {
        buffer[read_result] = '\0';
        printf("read success: %ld bytes read\nData: \"%s\"\n\n", read_result, buffer);
    }

    lseek(fd, 0, SEEK_SET);
    my_read_result = ft_read(fd, buffer, sizeof(buffer));
    if (my_read_result == -1) {
        printf("ft_read failed, errno:%d (%s)\n", errno, strerror(errno));
        my_read_ernno = errno;
    } else {
        buffer[my_read_result] = '\0';
        printf("ft_read success: %ld bytes read\nData: \"%s\"\n\n", my_read_result, buffer);
    }

    if (read_result == my_read_result && read_ernno == my_read_ernno) {
        printf(GREEN"Success\n"END);
    } else {
        printf(RED"Failure\n"END);
    }

    close(fd);
}
