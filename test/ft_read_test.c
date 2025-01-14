#include "library.h"

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