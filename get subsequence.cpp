//Get all possible subsequences
#include <bits/stdc++.h>
using namespace std;
vector<string> printSubSeq(string str)
{
     if(str.size()==0)
     {
          vector<string> vect={""};
          return vect;
     }
     char ch=str[0];     //a
     string rem=str.substr(1);     // bc
     vector<string> res=printSubSeq(rem);    //["b","bc","c"," "]
     
     vector<string> ans;
     for(int i=0;i<res.size();i++)
     {
          ans.push_back(res[i]);        // ans["b","c","bc"," "]
     }
      for(int i=0;i<res.size();i++)
     {
          ans.push_back(ch+res[i]);     //ans["b","c","bc"," ","ab","ac","abc","a"]
     }
     return ans;
}
int main()
{
	string str = "abc";
	vector<string> res=printSubSeq(str);
	for(int i=0;i<res.size();i++)
	{
	     cout<<res[i]<<"\n";
	}
	return 0;
}
/* We have this done using recursion
 -firstly we take a function of type vector<string>
 -we recieve its value in a vector<string> in driver code
 -in base case we return a vector contaning null string 
 -store the first character in char
 -store the remaining string in string
 -store the result of remaing string in a vector<string> (faith)
 -make one more vector<string> to add the stored charater in it
 */
 
 
