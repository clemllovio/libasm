#include "library.h"

void ft_write_test() {
	const char *test_str = "Hello, world!";
    size_t len = strlen(test_str);

    ssize_t ret_standard = write(-1, test_str, len);
    if (ret_standard == -1) {
        perror("write (standard) failed");
    } else {
        printf("write (standard) success: %ld bytes written\n", ret_standard);
    }

    ssize_t ret_asm = ft_write(-1, test_str, len);
    if (ret_asm == -1) {
        perror("ft_write (asm) failed");
    } else {
        printf("ft_write (asm) success: %ld bytes written\n", ret_asm);
    }

    if (ret_standard == ret_asm) {
        printf("Test passed: Both writes returned the same result\n");
    } else {
        printf("Test failed: Different results between write and ft_write\n");
    }

    if (ret_asm == -1) {
        printf("ft_write (asm) failed. errno: %d (%s)\n", errno, strerror(errno));
    } else {
        printf("ft_write (asm) succeeded. errno should not be set.\n");
    }
}