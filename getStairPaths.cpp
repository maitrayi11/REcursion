//ways to get stair paths
#include<bits/stdc++.h>
using namespace std;
vector<string> getStairPath(int n)
{
     if(n==0)
     {
          vector<string> vect{" "};
          return vect;
     }
     else if(n<0)
     {
          vector<string> vect;
          return vect;
     }
     vector<string> rem1=getStairPath(n-1);
     vector<string> rem2=getStairPath(n-2);
     vector<string> rem3=getStairPath(n-3);
     vector<string> ans;
     for(int j=0;j<rem1.size();j++){
          ans.push_back('1'+rem1[j]);
     }
     for(int j=0;j<rem2.size();j++){
          ans.push_back('2'+rem2[j]);
     }
     for(int j=0;j<rem3.size();j++){
          ans.push_back('3'+rem3[j]);
     }
     return ans;
}

int main()
{
     int n;
     cin>>n;
     vector<string> vect=getStairPath(n);
     for(int i=0;i<vect.size();i++)
     cout<<vect[i]<<"    ";
     return 0;
}
