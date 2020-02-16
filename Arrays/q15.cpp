//Algorithm to find the smallest integer value that can't be represented as sum of any subset of a given array.
#include <bits/stdc++.h>
using namespace std;
void findSmallest(int arr[], int size)
{
   int sum=1;
   for(int i=0;i<size;i++)
   {
       if(arr[i]<=sum)
       {
           sum=sum+arr[i];
       }
   }
   cout<<sum;
}

/* Driver code */
int main()
{
    int arr[] ={1, 1, 3, 4};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    findSmallest(arr,arr_size);
    return 0;
}
