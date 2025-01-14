#include "library.h"

void ft_strcmp_test() {
	const char *test_cases[][2] = {
        {"", ""},                     
        {"Hello", "Hello"},           
        {"Hello", "Hella"},           
        {"Short", "Shorter"},         
        {"Different", "Strings"},     
        {"", "NonEmpty"},             
        {"NonEmpty", ""},             
        {"A", "B"},                   
        {"Longer string", "Long"},    
        {"EqualLength", "EqualLengh"} 
    };

    printf("Testing ft_strcmp:\n\n");

    for (int i = 0; i < 10; i++) {
        const char *s1 = test_cases[i][0];
        const char *s2 = test_cases[i][1];

        int result_ft = ft_strcmp(s1, s2);
        int result_std = strcmp(s1, s2);

        printf("Test %d:\n", i + 1);
        printf("  s1: \"%s\"\n", s1);
        printf("  s2: \"%s\"\n", s2);
        printf("  ft_strcmp: %d\n", result_ft);
        printf("  strcmp:    %d\n", result_std);
        if (result_ft == result_std) {
            printf("  -> Passed\n\n");
        } else {
            printf("  -> Failed\n\n");
        }
    }
}