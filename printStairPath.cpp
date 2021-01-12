#include<bits/stdc++.h>
using namespace std;
void printStairPath(int i,string o)
{
     if(i==0)
     {cout<<o<<"\n";
          return;
     }
     if(i<0)
     return;
     
     printStairPath(i-1,o+'1');
     printStairPath(i-2,o+'2');
     printStairPath(i-3,o+'3');
     
}
int main()
{
     int i;
     string o;
     cin>>i;
     printStairPath(i,o);
     
     return 0;
}
