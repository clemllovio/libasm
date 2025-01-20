#include "libasm.h"

void test_ft_strcpy(char *src) {
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
    // test_strcpy("");
    // test_strcpy("A");
    // test_strcpy("Hello, World!");
    // test_strcpy("!@#&*()_+");
    test_ft_strcpy("");
    test_ft_strcpy("A");
    test_ft_strcpy("Hello, World!");
    test_ft_strcpy("42 Lyon - piscine");
    test_ft_strcpy("This is a longer string to check memory allocation!");
}