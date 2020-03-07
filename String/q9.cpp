// C++ program to find longest common prefix
// of given array of words.
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

string longestCommonPrefix(string arr[],int n)
{
    if(n==0)
    {
        return "";
    }
    if(n==1)
    {
        return arr[0];
    }
    sort(arr,arr+n);
    int len=min(arr[0].size(),arr[n-1].size());
    int i=0;
    while(len--)
    {
        if(arr[0][i]==arr[n-1][i])
        {
            i++;
        }
    }
    return arr[0].substr(0,i);
}


// Driver Code
int main()
{
    string ar[] = {"geeksforgeeks", "geeks",
                           "geek", "geezer"};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << "The longest common prefix is: "
         << longestCommonPrefix(ar, n);
    return 0;
}
