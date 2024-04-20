// 28. Create a program to find the area of a circle given its radius. 

#include <bits/stdc++.h>
using namespace std;

double PI = 3.14159;

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << calculateArea(radius) << endl;

    return 0;
}