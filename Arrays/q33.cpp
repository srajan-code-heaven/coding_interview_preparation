//Merge two sorted array in one in  O(1) extra space
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void merge(int arr1[],int arr2[],int m,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int j=m-2;
        int last=arr1[m-1];
        while(arr1[j]>arr2[i] && j>=0)
        {
            arr1[j+1]=arr1[j];
            j--;
        }
        if(j!=m-2 || last>arr2[i])
        {
       arr1[j+1]=arr2[i];
       arr2[i]=last;
        }


    }
}


int main(void)
{
    int ar1[] = {1, 5, 9, 10, 15, 20}; // 1,5,9,10,  ,15
    int ar2[] = {2, 3, 8, 13}; //
    int m = sizeof(ar1)/sizeof(ar1[0]);
    int n = sizeof(ar2)/sizeof(ar2[0]);
    merge(ar1, ar2, m, n);

    cout << "After Merging nFirst Array: ";
    for (int i=0; i<m; i++)
        cout << ar1[i] << " ";
    cout << "nSecond Array: ";
    for (int i=0; i<n; i++)
        cout << ar2[i] << " ";
   return 0;
}
