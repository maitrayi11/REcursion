#include<bits/stdc++.h>
using namespace std;
void printPermutation(string input,string output)
{
     if(input.size()==0)
     {
          cout<<output<<"\n";
          return ;
     }
     for(int i=0;i<input.size();i++)
     {
          char ch=input[i];
          string s=input.substr(0,i)+input.substr(i+1);
          printPermutation(s,output+ch);
         
     }
}
int main()
{
     string input,output;
     cin>>input;
     printPermutation(input,output);
     
     return 0;
}
