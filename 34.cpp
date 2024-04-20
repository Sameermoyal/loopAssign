//34. Create a program to find the sum of the series: 1 + x^2/2! + x^3/3! + ... + x^n/n!. 
#include <bits/stdc++.h>
using namespace std;

double calculateSeriesSum(int x, int n) {
    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) {
        term *= x;
        term /= i;
        sum += term;
    }

    return sum;
}

int main() {
    int x, n;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    cout <<calculateSeriesSum(x, n) << endl;

    return 0;
}