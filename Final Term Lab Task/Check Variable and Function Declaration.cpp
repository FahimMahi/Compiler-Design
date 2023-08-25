#include <bits/stdc++.h>
using namespace std;

bool isValidVariableDeclaration(const char *input) {
    int len = strlen(input);
    if (len < 4) {
        return false; // At least "int a;" should have 4 characters
    }

    // Check if the input ends with semicolon
    if (input[len - 1] != ';') {
        return false;
    }

    // Check if "int" is at the beginning
    if (strncmp(input, "int", 3) != 0) {
        return false;
    }

    // Check for opening and closing parentheses so that we can confirm it is variable not function
    const char *openParen = strchr(input, '(');
    const char *closeParen = strchr(input, ')');

    if (openParen == NULL || closeParen == NULL || closeParen < openParen) {
        return true;
    }

    return false;
}


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

    cout << "Enter a function or variable declaration: ";
    cin.getline(input, sizeof(input));

    // Remove newline character from input
    input[strcspn(input, "\n")] = '\0';

    if (isValidFunctionDeclaration(input)) {
        cout << "The input is a valid function declaration." << endl;
    }
    else if (isValidVariableDeclaration(input)) {
        cout << "The input is a valid variable declaration." << endl;
    }
    else {
        cout << "The input is not a valid function or variable declaration." << endl;
    }

    return 0;
}
