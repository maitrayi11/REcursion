#include<bits/stdc++.h>
using namespace std;
string codes[11]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
void printkeyComb(string i,string o)
{
     if(i.size()==0)
     {cout<<o<<"\n";
          return;
     }
     char ch=i[0];
     string str=i.substr(1);
     
     string s=codes[ch-'0'];
     for(int i=0;i<s.size();i++)
     {
          printkeyComb(str,o+s[i]);
     }
}
int main()
{
     string i,o;
     cin>>i;
     printkeyComb(i,o);
     
     return 0;
}
