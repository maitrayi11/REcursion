// To find last index of given element
#include <bits/stdc++.h>
using namespace std;
int lastInd(int arr[],int n,int id)
{
     if(n == sizeof(arr))
     return -1;
     int m1=lastInd(arr,n+1,id);
     if(m1==-1)
     {
          if(arr[n]==id)
          return n;
          else
          return -1;
     }
     else
     return m1;
}
int main()
{
     int id,n,arr[100];
     cin>>n>>id;
     for(int i=0;i<n;i++)
     cin>>arr[i];
    cout<<lastInd(arr,0,id);

    return 0;
}
