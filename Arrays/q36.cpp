// C++ program to Count
// Inversions in an array
// using Merge Sort
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int merge(int arr[],int left,int mid,int right)
{
    int i=left;
    int j=mid+1;
    int k=left;
    int inv_count=0;
    int temp[right-left+1];
    while(i<=mid && j<=right)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
            inv_count+=mid-i+1;
        }
    }

    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }

     while(j<=right)
    {
        temp[k++]=arr[j++];
    }

    for(int i=left;i<right;i++)
    {
        arr[i]=temp[i];
    }
    return inv_count;
}
int mergeSort(int arr[],int left,int right)
{
    int inv_count=0;
    int mid=0;
    if(left<right)
    {
        mid=(left+right)/2;
        inv_count+=mergeSort(arr,left,mid);
        inv_count+=mergeSort(arr,mid+1,right);
        inv_count+=merge(arr,left,mid,right);
    }
    return inv_count;
}
// Driver code
int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr,0,n-1);
    cout << " Number of inversions are " << ans;
    return 0;
}
