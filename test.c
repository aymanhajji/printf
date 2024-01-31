#include <stdio.h>
#include "main.h"

// Test function for %c - Character
void test_char() {
    int printed = _printf("Test character: %c\n", 'A');
    printf("Total characters printed: %d\n", printed);
}

// Test function for %s - String
void test_string() {
    int printed = _printf("Test string: %s\n", "Hello, World!");
    printf("Total characters printed: %d\n", printed);
}

// Test function for %% - Percent sign
void test_percent() {
    int printed = _printf("Test percent sign: %%\n");
    printf("Total characters printed: %d\n", printed);
}

// Test function with a combination of format specifiers
void test_combined() {
    int printed = _printf("Combined test: %c %s %c %% %s\n", 'X', "Hello", 'Y', "World!");
    printf("Total characters printed: %d\n", printed);
}

int main() {
    // Run the test functions
    test_char();
    test_string();
    test_percent();
    test_combined();

    return 0;
}
