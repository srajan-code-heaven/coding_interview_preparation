//Find minimum number of coins that make a given value
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int minCoins(int coins[],int n,int tar_amount)
{
    int cur_amount[tar_amount+1];
     for(int i=1;i<=tar_amount;i++)
     {
         cur_amount[i]=INT_MAX;
     }
    cur_amount[0]=0;
    for(int i=1;i<=tar_amount;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coins[j]<=i)
            {
                int temp=cur_amount[i-coins[j]];
                if(temp!=INT_MAX)
                {
                cur_amount[i]=(temp+1)>cur_amount[i]?cur_amount[i]:temp+1;
                }
            }

        }
    }
    return cur_amount[tar_amount];

}


int main()
{
  int coins[] = {9, 6, 5, 1};
    int m = sizeof(coins)/sizeof(coins[0]);
    int V = 11;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);
    return 0;
}
