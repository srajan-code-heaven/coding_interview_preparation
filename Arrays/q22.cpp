//Value to be subtracted from array elements to make sum of all elements equals K


#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// Function that returns Height at
// which cut should be made
int cutRequired(int height[],int n,int k)
{
    //finding total height sum of all the trees and also the minimum of all heights
    int sum=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum=sum+height[i];
        if(height[i]<min)
        {
            min=height[i];
        }
    }
    //if req_cut is the answer then sum-n*req_cut=k  , therefore req_cut=(sum-k)/n
    //checking if req_cut is an integer value
    if((sum-k)%n ==0)
    {
    int req_cut=(sum-k)/n;
    //checking if this answer is valid by comparing it with minimum height req_cut<=mininum height
    if(req_cut<=min)
    {
        return req_cut;
    }
    else
    {
        return -1;
    }
    }
    else
    {
        return -1 ;
    }

}
// Driver code
int main()
{

    int height[] = { 1, 2, 1, 2 };
    int n = sizeof(height) / sizeof(height[0]);
    int k = 2;

    cout << cutRequired(height, n, k);

    return 0;
}
