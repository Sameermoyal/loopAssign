//5. Write a program to find the sum of digits of a given number. 

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n<1)
        return 0;
    return n+sum(n-1);    
}
int main(){
    int n;
    cout<<"enter number you want be sum of digits ";
    cin>>n;
    int ans=sum(n);
    cout<<ans;
}
