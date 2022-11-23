#include <iostream>
#include "functions.h"
using namespace std;
int main() {
    int num1 , num2;
    char op;

    cout << "write your expression" << endl;

    cin >> num1 >> op >> num2;

    cout << calc(num1 , num2 , op) << endl;

    return 0;
}
