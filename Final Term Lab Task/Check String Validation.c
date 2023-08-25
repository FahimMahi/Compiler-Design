#include <stdio.h>
#include <string.h>

#include <stdbool.h>

 

bool isValidIdentifierChar(char ch) {

 

    return (ch >= 'a' && ch <= 'z') ||

           (ch >= 'A' && ch <= 'Z') ||

           (ch >= '0' && ch <= '9') ||

           (ch == '_');

}

 

bool isReservedKeyword(const char *str) {

 

    const char *keywords[] = {

        "auto", "break", "case", "char", "const", "continue", "default",

        "do", "double", "else", "enum", "extern", "float", "for", "goto",

        "if", "int", "long", "register", "return", "short", "signed",

        "sizeof", "static", "struct", "switch", "typedef", "union",

        "unsigned", "void", "volatile", "while"

    };

    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

 

 

    for (int i = 0; i < numKeywords; i++) {

        if (strcmp(str, keywords[i]) == 0) {

            return true;

        }

    }

 

 

    return false;

}

 

bool isValidIdentifier(const char *str) {

    if (!((str[0] >= 'a' && str[0] <= 'z') ||

          (str[0] >= 'A' && str[0] <= 'Z') ||

          (str[0] == '_'))) {

        return false;

    }

 

 

    for (int i = 1; i < strlen(str); i++) {

 

        if (!isValidIdentifierChar(str[i])) {

            return false;

        }

    }

 

 

    if (isReservedKeyword(str)) {

        return false;

    }

 

    return true;

}

 

int main() {

    char identifier[100];

 

    printf("Enter an identifier: ");

    scanf("%s", identifier);

 

    if (isValidIdentifier(identifier)) {

        printf("Valid identifier.\n");

    } else {

        printf("Invalid identifier.\n");

    }

 

    return 0;

}