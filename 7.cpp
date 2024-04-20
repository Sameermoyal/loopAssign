//7. Write a program to find the reverse of a given number. 


#include <bits/stdc++.h>
using namespace std;
int rev(int n){
    int a,b=0;
    while(n){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    return b;
}
int main()
{ cout<<"enter number";
   int n;
   cin>>n;
   int ans=rev(n);
   cout<<ans;
    return 0;
}

