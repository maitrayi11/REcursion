#include<bits/stdc++.h>
using namespace std;
void printMazePathWithJumps(int sr,int sc,int dr,int dc,string o)
{
     
     if(sr==dr && sc==dc)
     {
          cout<<o<<"\n";
          return ;
     }
     
          for(int i=1;i<=(dr-sr);i++)
          printMazePathWithJumps(sr+i,sc,dr,dc,o+'v'+ to_string(i));
          
          for(int i=1;i<=(dc-sc);i++)
          printMazePathWithJumps(sr,sc+i,dr,dc,o+'h'+ to_string(i));

          for(int i=1;i<=(dr-sr) && i<=(dc-sc);i++)
          printMazePathWithJumps(sr+i,sc+i,dr,dc,o+'d'+ to_string(i));
}
int main()
{
     int sr,sc,dr,dc;
     cin>>dr>>dc;
     string o;
     sr=sc=1;
     printMazePathWithJumps(sr,sc,dr,dc,o);
     
     return 0;
}
