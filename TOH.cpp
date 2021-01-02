// TOH
#include<bits/stdc++.h>
using namespace std;
void TOH(int n,int S,int D,int M)
{
     if(n==0)
     return;
     TOH(n-1,S,M,D);
     cout<<n<<" "<<S<<"->"<<D<<"\n";
     TOH(n-1,M,D,S);
}
int main()
{    char S,D,M;
     TOH(3,0,100,10);
     return 0;
}
