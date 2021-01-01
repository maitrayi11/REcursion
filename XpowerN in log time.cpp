#include<bits/stdc++.h>
using namespace std;
int powerLN(int x,int n)
{
    if(n == 0)
    return 1;
    int f1=powerLN(x,n/2);
    int f2=f1*f1;
    if(n%2!=0)
    return f2*x;
    else
    return f2;
}
int main()
{
     int x,n;
     cin>>x>>n;
     cout<<powerLN(x,n);
     
     return 0;
}


output:
7 0 //1
7 9 //40353607
