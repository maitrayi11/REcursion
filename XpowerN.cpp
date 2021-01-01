#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
    if(n<=1)
    return x;
    
    int f1=power(x,n-1);
    int f2=x*f1;
    return f2;
}
int main()
{
     int x,n;
     cin>>x>>n;
     cout<<power(x,n);
     
     return 0;
}
