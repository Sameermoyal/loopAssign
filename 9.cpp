//9. Write a program to find the GCD (Greatest Common Divisor) of two given numbers.  


#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    
   while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
     
    
}
int main()
{ cout<<"enter number ";
   int n,m;
   cin>>n>>m;
   int ans=sum(n,m);
   cout<<ans;
    return 0;
}

