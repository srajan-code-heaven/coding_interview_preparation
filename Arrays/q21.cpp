//Find four missing numbers in an array containing elements from 1 to N

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void missing4(int arr[],int n)
{
    int extra[4];
    for(int i=0;i<n;i++)
    {
        int temp=abs(arr[i]);
        if(temp<=n)
        {
            arr[temp-1]=-arr[temp-1];
        }
        else
        {
            if(temp%n!=0)
            {
                extra[temp%n-1]=-1;
            }
            else
            {
                extra[n-1]=-1;
            }

        }
    }

        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                cout<<i+1<<" ";
            }
        }
        for(int i=0;i<4;i++)
        {
            if(extra[i]>0)
            {
                cout<<n+i+1<<" ";
            }
        }
}


int main()
{
    int arr[] = { 1, 7, 3, 12, 5, 10, 8, 4, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    missing4(arr, n);
    return 0;
}
