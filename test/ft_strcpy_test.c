#include "library.h"

void test_strcpy(char *src) {
   char dest1[50], dest2[50];
    strcpy(dest1, src);
    ft_strcpy(dest2, src);

    printf("Test: \"%s\"\n", src);
    printf("strcpy: \"%s\"\n", dest1);
    printf("ft_strcpy: \"%s\"\n", dest2);

    if (strcmp(dest1, dest2) == 0) {
        printf("Comparaison: Succès\n\n");
    } else {
        printf("Comparaison: Échec\n\n");
    }
}

void	ft_strcpy_test() {
    test_strcpy("");
    test_strcpy("A");
    test_strcpy("Hello, World!");
    test_strcpy("Test avec des espaces");
    test_strcpy("!@#&*()_+");
}