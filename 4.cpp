//4. Create a program to find whether a given number is prime or not. 

#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    
    int ans=prime(n);
     cout<<"1:prime , 0:not-prime "<<endl;
    cout<<ans;
    
}