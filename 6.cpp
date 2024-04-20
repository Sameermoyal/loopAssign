//6. Create a program to print the Fibonacci series up to a certain limit. 

#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);    
}
int main()
{ 
   int ans=fibonacci(5);
   cout<<ans;
    return 0;
}