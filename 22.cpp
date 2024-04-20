//22. Create a program to find the sum of squares of all even numbers between two given numbers.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end, sum = 0;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            sum += i * i;
        }
    }

    cout << sum << endl;

    return 0;
}