//Given an array of integers, sort the array into a wave like array and return it. (arrange the element into a sequence such that a1>=a2<=a3>=a4<=a5----etc.
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sortinwave(int a[],int n)
{
 for(int i=0;i<n;i=i+2)
 {
     if(i>0 && a[i-1]>a[i])
     {
         swap(&a[i-1],&a[i]);
     }
     if(i<n-1 && a[i+1]>a[i])
     {
         swap(&a[i+1],&a[i]);
     }
 }
}
int main()
{
   int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortinwave(arr, n);
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}
