#include<bits/stdc++.h>
using namespace std;
void pdi(int a)
{
     if(a==0)
     return;
     cout<<a<<"\n";
     pdi(a-1);
     cout<<a<<"\n";
}
int main()
{
     int a;
     cin>>a;
     pdi(a);
     
     return 0;
}
