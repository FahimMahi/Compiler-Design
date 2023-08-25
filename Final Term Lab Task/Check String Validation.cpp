#include <bits/stdc++.h>
using namespace std;

bool isValidIdentifierChar(char ch) {
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9') ||
           (ch == '_');
}

bool isReservedKeyword(const string &str) {
    const string keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"
    };
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++) {
        if (str == keywords[i]) {
            return true;
        }
    }

    return false;
}

bool isValidIdentifier(const string &str) {
    if (!((str[0] >= 'a' && str[0] <= 'z') ||
          (str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] == '_'))) {
        return false;
    }

    for (int i = 1; i < str.length(); i++) {
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
    string identifier;

    cout << "Enter an identifier: ";
    cin >> identifier;

    if (isValidIdentifier(identifier)) {
        cout << "Valid identifier." << endl;
    } else {
        cout << "Invalid identifier." << endl;
    }

    return 0;
}
