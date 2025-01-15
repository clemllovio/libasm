#include "libasm.h"

void test_strcpy(char *src) {
   char dest1[50], dest2[50];
    strcpy(dest1, src);
    ft_strcpy(dest2, src);

    printf("src: \"%s\"\n", src);
    printf("strcpy: \"%s\"\n", dest1);
    printf("ft_strcpy: \"%s\"\n", dest2);

    if (strcmp(dest1, dest2) == 0)
        printf(GREEN"Success\n\n"END);
    else
        printf(RED"Failure\n\n"END);
}

void	ft_strcpy_test() {
    test_strcpy("");
    test_strcpy("A");
    test_strcpy("Hello, World!");
    test_strcpy("!@#&*()_+");
}