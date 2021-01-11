#include<bits/stdc++.h>
using namespace std;
vector<string> getMazePath(int sr,int sc,int dr,int dc)
{
     if(sr==dr && sc==dc)
     {vector<string> vect={""};
     return vect;}
     vector<string> p1;
     vector<string> p2;
     if(sr<dr)
     {
           p1=getMazePath(sr+1,sc,dr,dc);
     }
     if(sc<dc)
     {
           p2=getMazePath(sr,sc+1,dr,dc);
     }
     vector<string> ans;
     for(int i=0;i<p1.size();i++)
     {
          ans.push_back('v'+p1[i]);
     }
     for(int i=0;i<p2.size();i++)
     {
          ans.push_back('h'+p2[i]);
     }
     return ans;
}
int main()
{
     int n,m;
     cin>>n>>m;
     vector<string> vect=getMazePath(1,1,n,m);
     for(int i=0;i<vect.size();i++)
     cout<<vect[i]<<"\n";
     return 0;
}
