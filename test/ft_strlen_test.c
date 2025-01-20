#include "libasm.h" 

void    print_ft_strlen(char *str) {
    size_t  my_strlen_result, strlen_result;

    my_strlen_result = ft_strlen(str);
    strlen_result = strlen(str);

    printf("str: \"%s\"\n", str);
    printf("ft_strlen: %zu\nstrlen: %zu\n", my_strlen_result, strlen_result);

    if (my_strlen_result == strlen_result)
        printf(GREEN"Success\n\n"END);
    else
        printf(RED"Failure\n\n"END);
}

void	ft_strlen_test(){
    // print_ft_strlen("");
    // print_ft_strlen("A");
    // print_ft_strlen("Hello, World!");
    // print_ft_strlen("!@#&*()_+");
    print_ft_strlen("");
    print_ft_strlen("A");
    print_ft_strlen("Hello, World!");
    print_ft_strlen("42 Lyon - piscine");
    print_ft_strlen("This is a longer string to check memory allocation!");
}