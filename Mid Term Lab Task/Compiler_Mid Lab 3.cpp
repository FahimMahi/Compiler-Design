#include <bits/stdc++.h>
using namespace std;

int main(){
    string expression;
    cout << "Enter the expression: ";
    getline(cin, expression);

    for (size_t i = 0; i < expression.length(); ++i) {
        if (expression[i] == '<') {
            if (i + 1 < expression.length() && expression[i + 1] == '=') {
                cout << "<= Less than or equal to" << endl;
                ++i;  // Skip the next character ('=')
            }
            else {
                cout << "< Less than" << endl;
            }
        }
        else if (expression[i] == '>') {
            if (i + 1 < expression.length() && expression[i + 1] == '=') {
                cout << ">= Greater than or equal to" << endl;
                ++i;  // Skip the next character ('=')
            }
            else {
                cout << "> Greater than" << endl;
            }
        }
        else if (expression[i] == '=') {
            if (i + 1 < expression.length() && expression[i + 1] == '=') {
                cout << "== Equal to" << endl;
                ++i;  // Skip the next character ('=')
            }
        }
        else if (expression[i] == '!') {
            if (i + 1 < expression.length() && expression[i + 1] == '=') {
                cout << "!= Not equal to" << endl;
                ++i;  // Skip the next character ('=')
            }
        }
    }
    return 0;
}
