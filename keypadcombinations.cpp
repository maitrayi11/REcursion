//print keypad combinations
#include<bits/stdc++.h>
using namespace std;
string codes[11]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector<string> kpc(string str)
{
     if(str.size()==0)
     { 
          vector<string> vect={""};
          return vect;
     }
     
     char ch=str[0];
     string res=str.substr(1);
     vector<string> rem=kpc(res);
     vector<string> ans;
     string s=codes[ch -'0'];       //changing char to int
     for(int i=0;i<s.length();i++)
     {
          char c=s[i];
          for(int j=0;j<rem.size();j++)
          ans.push_back(rem[j]+c);
     }
     return ans;
}
int main()
{
   string str="01";
   vector<string> vect=kpc(str);
   for(int i=0;i<vect.size();i++)
   cout<<vect[i]<<"     ";
  
    return 0;
}
