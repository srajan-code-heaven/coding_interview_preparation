//Longest Palindromic Substring
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void printSubStr( string str, int low, int high )
{
    for( int i = low; i <= high; ++i )
        cout << str[i];
}

int longestPalSubstr(string str)
{
   int maxlen = 1;
   int start=0;
    int n=str.size();
    bool table[n][n];
    memset(table,0,sizeof(table));
    for(int i=0;i<n;i++)
    {
        table[i][i]=true;
    }
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
        table[i][i+1]=true;
        start=i;
        maxlen=2;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(str[i]==str[j] && table[i+1][j-1])
            {
                table[i][j]=true;
                if(k>maxlen)
                {
                    maxlen=k;
                    start=i;
                }
            }
        }
    }

    cout<<"longest palindromic substring is ";
    printSubStr(str,start,start+maxlen-1);
    return maxlen;
}

// Driver Code
int main()
{
    string str = "forgeeksskeegfor";
    cout << "\nLength is: " << longestPalSubstr( str );
    return 0;
}
