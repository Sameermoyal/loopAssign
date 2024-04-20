//10. Create a program to find the LCM (Least Common Multiple) of two given numbers  


#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    
   while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main()
{ cout<<"enter number ";
   int n,m;
   cin>>n>>m;
   int ans=lcm(n,m);
   cout<<ans;
    return 0;
}

