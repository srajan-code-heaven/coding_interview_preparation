//Algorithm to find the contiguous sub-array with maximum sum, for a given array of postive and negative numbers.
//Kadane's Algorithm
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(int a[],int n)
{
    int maxsofar=INT_MIN;
    int maxendinghere=0;
    for(int i=0;i<n;i++)
    {
        maxendinghere=maxendinghere+a[i];
        if(maxendinghere>maxsofar)
        {
            maxsofar=maxendinghere;
        }
        if(maxendinghere<0)
        {
            maxendinghere=0;
        }
    }
    return maxsofar;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
