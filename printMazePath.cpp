#include<bits/stdc++.h>
using namespace std;
void printMazePath(int sr,int sc,int dr,int dc,string o)
{
     if(sr==dr && sc==dc)
     {
          cout<<o<<"\n";
          return ;
     }
     
     if(sr<dr)
     printMazePath(sr+1,sc,dr,dc,o+'h');
     if(sc<dc)
     printMazePath(sr,sc+1,dr,dc,o+'v');
}
int main()
{
     int sr,sc,dr,dc;
     cin>>dr>>dc;
     string o;
     sr=sc=1;
     printMazePath(sr,sc,dr,dc,o);
     
     return 0;
}
