//3. Write a program to calculate the factorial of a given number. 

#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<1)
        return 1;
    return n*fact(n-1);    
}
int main(){
    int n;
    cout<<"enter number you eant to be factorial ";
    cin>>n;
    int ans=fact(n);
    cout<<ans;
}
