#include "libasm.h"

void print_ft_strcmp(char *s1, char *s2) {
    int my_strcmp_result;
    int strcmp_result;

    my_strcmp_result = ft_strcmp(s1, s2);
    strcmp_result = strcmp(s1, s2);

    printf("s1: \"%s\"\n", s1);
    printf("s2: \"%s\"\n", s2);
    printf("ft_strcmp: %d\n", my_strcmp_result);
    printf("strcmp:    %d\n", strcmp_result);
    if (my_strcmp_result == strcmp_result)
        printf(GREEN"Success\n\n"END);
    else
        printf(RED"Failure\n\n"END);
}

void ft_strcmp_test() {
    print_ft_strcmp("", "");
    print_ft_strcmp("Hello", "Hello");
    print_ft_strcmp("Hello", "Hella");
    print_ft_strcmp("Short", "Shorter");
    print_ft_strcmp("Different", "Strings");
    print_ft_strcmp("", "NonEmpty");
    print_ft_strcmp("NonEmpty", "");
    print_ft_strcmp("A", "B");
    print_ft_strcmp("Longer string", "Long");
    print_ft_strcmp("EqualLength", "EqualLengh");
}