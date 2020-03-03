//Count ways to reach the n’th stair taking 1 2 3 .... m steps at a time

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int countWays(int s,int m)
{
    int res[s];
    res[0]=1;
    res[1]=1;
    for(int i=2;i<s;i++)
    {
        res[i]=0;
        for(int j=1;j<=i &&j<=m;j++)
        {
            res[i]=res[i]+res[i-j];
        }
    }
    return res[s-1];
}
// Driver program to test above functions
int main ()
{
    int s = 4, m = 2;
    printf("Nuber of ways = %d", countWays(s+1, m));
    return 0;
}
