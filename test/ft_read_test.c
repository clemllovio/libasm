#include "libasm.h"

void	ft_read_test() {
	const char *filename = "test_file.txt";
    char buffer[100];
    ssize_t ret_standard, ret_asm;

    int fd = open(filename, O_CREAT | O_RDWR, 0644);
    if (fd == -1) {
        perror("Failed to open file");
        return;
    }
    const char *test_str = "Hello, world! This is a test.";
    write(fd, test_str, strlen(test_str));

    lseek(fd, 0, SEEK_SET);
    ret_standard = read(fd, buffer, sizeof(buffer));
    if (ret_standard == -1) {
        perror("read (standard) failed");
    } else {
        buffer[ret_standard] = '\0';
        printf("read (standard) success: %ld bytes read. Data: %s\n", ret_standard, buffer);
    }

    lseek(fd, 0, SEEK_SET);
    ret_asm = ft_read(fd, buffer, sizeof(buffer));
    if (ret_asm == -1) {
        perror("ft_read (asm) failed");
    } else {
        buffer[ret_asm] = '\0';
        printf("ft_read (asm) success: %ld bytes read. Data: %s\n", ret_asm, buffer);
    }

    if (ret_standard == ret_asm) {
        printf("Test passed: Both reads returned the same result\n");
    } else {
        printf("Test failed: Different results between read and ft_read\n");
    }

    if (ret_asm == -1) {
        printf("ft_read (asm) failed. errno: %d (%s)\n", errno, strerror(errno));
    } else {
        printf("ft_read (asm) succeeded. errno should not be set.\n");
    }

	close(fd);
}


void    print_ft_read(int fd, const char *str) {
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

void ft_read_test() {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return;

    print_ft_read(fd, "");
    print_ft_read(fd, "Hello, world!\n");
    print_ft_read(fd, "A\n");
    print_ft_read(fd, "1234567890\n");
    print_ft_read(fd, "!@#$^&*()_+\n");
}