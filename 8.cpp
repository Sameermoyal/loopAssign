//8. Create a program to find the sum of all natural numbers up to a given limit.  


#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n<0)
        return 0;
    return n + sum(n-1);        
    
}
int main()
{ cout<<"enter number ";
   int n;
   cin>>n;
   int ans=sum(n);
   cout<<ans;
    return 0;
}

