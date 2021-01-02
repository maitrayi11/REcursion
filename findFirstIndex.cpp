// to find first occurrence of a number using recursion
#include <bits/stdc++.h>
using namespace std;
int findFirst(int arr[],int n,int id)
{
     if(n==sizeof(arr))
     return -1;
     if(arr[n]==id)
     return n;
     findFirst(arr,n+1,id);
     
}
int main()
{
    int arr[10]={23,45,76,56,40,9,7,45,89,76};
    cout<<findFirst(arr,0,45);

    return 0;
}
