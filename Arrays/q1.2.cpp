//Given an array A[] and a number x, check for pair in A[] with sum as x

#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int arr[],int arrsize, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<arrsize;i++)
    {
        int temp=sum-arr[i];
        if(s.find(temp)!=s.end())
        {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main()
{
    int A[]={1,4,45,6,10,-8};
    int n=12;
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
