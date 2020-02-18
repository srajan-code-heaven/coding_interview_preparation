//Trapping rain water problem

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void TappingRainwaterProblem(int arr[],int n)
{
    int res=0;
    int left[n],right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        res=res+min(left[i],right[i])-arr[i];
    }
    cout<<res;
}
int main()
{
 int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum water that can be accumulated is : ";
    TappingRainwaterProblem(arr,n);
    return 0;
}
