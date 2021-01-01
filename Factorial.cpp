#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
     if(a<=1)
     return 1;
     
     int f1=fact(a-1);
     int f2=a*f1;
     return f2;
}
int main()
{
     int a;
     cin>>a;
     cout<<fact(a);
     
     return 0;
}
