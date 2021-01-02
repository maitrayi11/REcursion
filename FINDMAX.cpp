// to find max using recursion
#include <bits/stdc++.h>
using namespace std;
int findMax(int arr[],int n)
{
     if(n==sizeof(arr))
     return 0;
     int m1=findMax(arr,n+1);
     if(arr[n]>m1)
     return arr[n];
     else
     return m1;
}
int main()
{
    int arr[7]={23,45,76,56,40,9,7};
    cout<<findMax(arr,0);

    return 0;
}
