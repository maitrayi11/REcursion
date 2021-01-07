// number of ways by which we can traverse a maze
#include<bits/stdc++.h>
using namespace std;
int getMazePath(int src,int des,int n,int m)
{
     
      if(m==0|| n==0)
     return 1;
     int rem1=getMazePath(1,1,n-1,m);
     int rem2=getMazePath(1,1,n,m-1);
     
     return rem1+rem2;
}

int main()
{
     int n,m;
     cin>>n>>m;
     cout<<getMazePath(1,1,n-1,m-1);
    
     return 0;
}
