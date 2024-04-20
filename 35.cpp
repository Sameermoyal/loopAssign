//35. Write a program to find the sum of the series: 1/1! - 2/2! + 3/3! - 4/4! + ... + N/N!. 
#include <bits/stdc++.h>
using namespace std;

double calculateSeriesSum(int N) {
    double sum = 0.0;
    double term = 1.0;
    double sign = 1.0;

    for (int i = 1; i <= N; ++i) {
        term /= i;
        sum += sign * term;
        sign *= -1;
    }

    return sum;
}

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << calculateSeriesSum(N) << endl;

    return 0;
}