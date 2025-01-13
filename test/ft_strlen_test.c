#include "library.h" 

void	ft_strlen_test(){
    const char *test1 = "";
    printf("Test 1: \"%s\"\n", test1);
    printf("ft_strlen: %d,\n strlen: %lu\n\n", ft_strlen(test1), strlen(test1));

    const char *test2 = "A";
    printf("Test 2: \"%s\"\n", test2);
    printf("ft_strlen: %d,\n strlen: %lu\n\n", ft_strlen(test2), strlen(test2));

    const char *test3 = "Hello, World!";
    printf("Test 3: \"%s\"\n", test3);
    printf("ft_strlen: %d,\n strlen: %lu\n\n", ft_strlen(test3), strlen(test3));

    const char *test4 = "Test avec des espaces";
    printf("Test 4: \"%s\"\n", test4);
    printf("ft_strlen: %d,\n strlen: %lu\n\n", ft_strlen(test4), strlen(test4));

    const char *test5 = "!@#&*()_+";
    printf("Test 5: \"%s\"\n", test5);
    printf("ft_strlen: %d,\n strlen: %lu\n\n", ft_strlen(test5), strlen(test5));

    return ;
}