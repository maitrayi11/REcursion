#include<bits/stdc++.h>
using namespace std;
void printdec(int a)
{
     if(a==0)
     return;
     cout<<a<<" ";
     printdec(a-1);
}
int main()
{
     int a;
     cin>>a;
     printdec(a);
     return 0;
}
