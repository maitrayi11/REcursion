#include<bits/stdc++.h>
using namespace std;
void printSubSeq(string i,string o)
{
     if(i.size()==0)
     {cout<<o<<"\n";
          return;
     }
     char ch=i[0];
     string str=i.substr(1);
     printSubSeq(str,o+"");
     printSubSeq(str,o+ch);
}
int main()
{
     string i,o;
     cin>>i;
     printSubSeq(i,o);
     
     return 0;
}
