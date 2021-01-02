// to print 2 1 1 1 2 1 1 1 2
#include<bits/stdc++.h>
using namespace std;
void p(int n)
{
     if(n==0)
     return;
     cout<<"pre     "<<n<<"\n";
     p(n-1);
     cout<<"in      "<<n<<"\n";
     p(n-1);
     cout<<"post    "<<n<<"\n";
}
int main()
{
     p(2);
     return 0;
}
