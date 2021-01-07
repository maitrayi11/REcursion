//count the ways to get stair paths
#include<bits/stdc++.h>
using namespace std;
int getStairPath(int n)
{
     if(n==0)
     {
         return 1;
     }
     else if(n<0)
     {
          return 0;
     }
     int rem1 = getStairPath(n-1);
     int rem2 = getStairPath(n-2);
     int rem3 = getStairPath(n-3);
     
     return rem1+rem2+rem3;
}
