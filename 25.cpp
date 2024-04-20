// 25. Write a program to calculate the sum of the series: 1 + 1/2 + 1/3 + 1/4 + ... + 1/N. 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    double sum = 0.0;

    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum += 1.0 / i;
    }

    cout << sum << endl;

    return 0;
}