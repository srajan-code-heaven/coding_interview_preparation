
//Subarray with given sum
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void contisubar(int arr[],int n,int sum)
{
    int curr_sum=0;
    int start=0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        while(curr_sum>sum && start<=i)
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum)
        {
            cout<<start+1<<" "<<i+1<<"\n";
            break;
        }
    }
}


int main()
{
    int t,n,sum;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        cin>>sum;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        contisubar(arr,n,sum);

    }
}
