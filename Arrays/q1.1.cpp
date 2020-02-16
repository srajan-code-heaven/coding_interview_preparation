//Given an array A[] and a number x, check for pair in A[] with sum as x

#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int arr[],int arrsize, int sum)
{
    int l,r;
    sort(arr,arr+arrsize);
    l=0;
    r=arrsize-1;
    while(l<r)
    {
        if(arr[l]+arr[r]==sum)
        {
            return true;
        }
        else if(arr[l]+arr[r]<sum)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return false;
}

int main()
{
    int A[]={1,4,45,6,10,-8};
    int n=16;
    int arr_size=sizeof(A)/sizeof(int);
    if(hasArrayTwoCandidates(A,arr_size,n))
    {
        cout<<"Array has two elements with given sum";
    }
    else
    {
        cout<<"Array doesn't have two elements with given sum";
    }

}
