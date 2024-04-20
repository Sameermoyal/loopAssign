//21. Write a program to print the first N terms of the series: 1, 4, 9, 16, 25, ... 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cout << "Enter the number of terms: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << i * i << " ";
    }
    
    cout << endl;

    return 0;
}