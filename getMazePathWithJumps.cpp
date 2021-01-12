#include<bits/stdc++.h>
using namespace std;
vector<string> getMazePathwithjumps(int sr,int sc,int dr,int dc)
{
     if(sr==sc && dr==dc)
     {
          vector<string> c={""};
          return c;
     }
     vector<string> ans;
     for(int i=1;i<=dc-sc;i++)
     {
          vector<string> ph=getMazePathwithjumps(sr,sc+i,dr,dc);
          for(int j=0;j<ph.size();j++)
          ans.push_back('h'+(char)i + ph[j]);
     }
     for(int i=1;i<=dr-sr;i++)
     {
          vector<string> pv=getMazePathwithjumps(sr+i,sc,dr,dc);
          for(int j=0;j<pv.size();j++)
          ans.push_back('v'+ (char)i + pv[j]);
     }
     for(int i=1;i<=dc-sc && i<=dr-sc;i++)
     {
          vector<string> pd=getMazePathwithjumps(sr+i,sc+i,dr,dc);
          for(int j=0;j<pd.size();j++)
          ans.push_back('d'+ (char)i + pd[j]);
     }
     return ans;
}
int main()
{
     int n,m;
     cin>>n>>m;
     vector<string> vect=getMazePathwithjumps(1,1,n,m);
     for(int i=0;i<vect.size();i++)
     cout<<vect[i]<<"\n";
     return 0;
}
