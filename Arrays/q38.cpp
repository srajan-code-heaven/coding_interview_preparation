
// Leaders in an array
// Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost
// element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void printLeaders(int arr[],int n)
{
    int max_rgt=arr[n-1];
    cout<<max_rgt<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max_rgt)
        {
            cout<<arr[i]<<" ";
            max_rgt=arr[i];
        }
    }
}


int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}
