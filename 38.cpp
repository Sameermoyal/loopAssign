//38. Create a program to find the sum of the squares of the digits of a number until it becomes a  single-digit number. 
#include <bits/stdc++.h>
using namespace std;

int sumOfSquares(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += digit * digit;
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

    cout << sumOfSquares(number) << endl;

    return 0;
}