//Minimize the maximum difference between the heights

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int ans=arr[n-1]-arr[0];
    int small=arr[0]+k;
    int large=arr[n-1]-k;
    if (small>large)
    {
        swap(small,large);
    }
    for(int i=1;i<n-1;i++)
    {
        int subs=arr[i]-k;
        int add= arr[i]+k;
        if(subs>=small || add <=large)
        {
            continue;
        }
        if(large-subs<add-small)
        {
            small=subs;
        }
        else
        {
            large=add;
        }
    }
    return min(ans,large-small);
}


int main()
{
    int arr[] = {4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 10;
    cout << "\nMaximum difference is "<< getMinDiff(arr, n, k);
    return 0;
}
