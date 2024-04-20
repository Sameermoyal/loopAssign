//31. Write a program to print all ASCII characters with their corresponding integer values.
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "ASCII characters with their integer values:" << endl;
    for (int i = 0; i <= 127; ++i) {
        cout << "ASCII value of character '" << char(i) << "' is " << i << endl;
    }
    return 0;
}