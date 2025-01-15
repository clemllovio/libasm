#include "libasm.h"

void test_ft_strdup(const char *input) {
    printf("Testing ft_strdup with input: \"%s\"\n", input);

    // Appel de ft_strdup
    char *result_ft = ft_strdup(input);
    if (!result_ft) {
        perror("ft_strdup failed");
        return;
    }

    // Appel de strdup pour comparaison
    char *result_std = strdup(input);
    if (!result_std) {
        perror("strdup failed");
        free(result_ft);
        return;
    }

    // Comparer les deux chaînes
    if (strcmp(result_ft, result_std) == 0) {
        printf("PASS: Content matches\n");
    } else {
        printf("FAIL: Content does not match\n");
    }

    // Vérifier que l'adresse est différente
    if (result_ft != input) {
        printf("PASS: Result is a new allocation\n");
    } else {
        printf("FAIL: Result points to the original string\n");
    }

    // Libérer la mémoire
    free(result_ft);
    free(result_std);

    printf("\n");
}

void	ft_strdup_test() {
	test_ft_strdup("");
    test_ft_strdup("A");
    test_ft_strdup("Hello, World!");
    test_ft_strdup("42 Lyon - piscine");
    test_ft_strdup("This is a longer string to check memory allocation!");

}