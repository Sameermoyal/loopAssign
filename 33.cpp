// 33. Write a program to find the factorial of a large number using big integers.
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout <<factorial(num) << endl;
    return 0;
}