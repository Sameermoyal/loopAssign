//39. Write a program to find the factorial of each digit of a given number and add them until it  becomes a single-digit number. 

#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int sumOfFactorialDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << sumOfFactorialDigits(number) << endl;

    return 0;
}