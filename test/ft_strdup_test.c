#include "libasm.h"

void test_ft_strdup(const char *str) {
    printf("str: \"%s\"\n", str);

    char *my_strdup_result = ft_strdup(str);
    if (!my_strdup_result)
        printf("ft_strdup failed");
    else
        printf("Success, my_strdup_result : \"%s\"\n", my_strdup_result);


    char *strdup_result = strdup(str);
    if (!strdup_result) 
        printf("strdup failed");
    else
        printf("Success, strdup_result : \"%s\"\n", strdup_result);


    if (strcmp(my_strdup_result, strdup_result) == 0)
        printf(GREEN"Success\n\n"END);
    else
        printf(RED"Failure\n\n"END);

    free(my_strdup_result);
    free(strdup_result);

    printf("\n");
}

void	ft_strdup_test() {
	test_ft_strdup("");
    test_ft_strdup("A");
    test_ft_strdup("Hello, World!");
    test_ft_strdup("This is a longer string to check memory allocation!");
}