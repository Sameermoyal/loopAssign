//2. Create a program to print the multiplication table of a given number. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    for(int i=1;i<=10;i++){
        cout<<i*a<<endl;
    }
    return 0;
}