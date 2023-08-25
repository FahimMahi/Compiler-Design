#include <stdio.h>
#include <stdbool.h>
#include <string.h>

 

bool isValidFunctionDeclaration(const char *input) {
    int len = strlen(input);
    if (len < 4) {
        return false; // At least "int a();" should have 4 characters
    }

 

    // Check if the input ends with semicolon
    if (input[len - 1] != ';') {
        return false;
    }

 

    // Check if "int" is at the beginning
    if (strncmp(input, "int", 3) != 0) {
        return false;
    }

 

    // Check for opening and closing parentheses
    const char *openParen = strchr(input, '(');
    const char *closeParen = strchr(input, ')');

 

    if (openParen == NULL || closeParen == NULL || closeParen < openParen) {
        return false;
    }

 

    return true;
}

 

int main() {
    char input[100];

 

    printf("Enter a function declaration: ");
    fgets(input, sizeof(input), stdin);

 

    // Remove newline character from input
    input[strcspn(input, "\n")] = '\0';

 

    if (isValidFunctionDeclaration(input)) {
        printf("The input is a valid function declaration.\n");
    } else {
        printf("The input is not a valid function declaration.\n");
    }

 

    return 0;
}