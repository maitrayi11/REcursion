// print an array
#include<bits/stdc++.h>
using namespace std;
void printARR(int n,int arr[])
{
     if(n<0)
     return;
     printARR(n-1,arr);
     cout<<arr[n]<<" ";
    
}
int main()
{    int arr[10]={1,2,3,4,5,6,7,8,9,10};
     printARR(9,arr);
     return 0;
}
