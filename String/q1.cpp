//Missing characters to make a string Pangram

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR=26;
string missingcharacter(string str)
{
    bool presence[MAX_CHAR]={false};
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            presence[str[i]-'A']=true;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
             presence[str[i]-'a']=true;
        }
    }

    string ans="";
    for(int i=0;i<26;i++)
    {
        if(presence[i]==false)
        {
            //ans.push_back((char)(i+'a'));
           ans = ans+(char)(i+'a');
        }
    }
    return ans;
}



int main()
{
  string str = "The quick brown fox jumps "
                 "over the dog";
    cout << missingcharacter(str);
    return 0;
}
