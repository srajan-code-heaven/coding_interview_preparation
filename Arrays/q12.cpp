//Algorithm to find the triplet whose sum is X

#include <bits/stdc++.h>
using namespace std;
void find3Numbers(int arr[], int size,int sum)
{
   unordered_set<int> s;
   for(int i=0;i<size-2;i++)
   {
       int nsum=sum-arr[i];
       for(int j=i+1;j<size;j++)
       {
           if(s.find(nsum-arr[j])!=s.end())
           {
               cout<<"triplet is :"<<arr[i]<<" "<<arr[j]<<" "<<nsum-arr[j];
               return;
           }
           s.insert(arr[j]);
       }
   }

}

/* Driver code */
int main()
{
    int arr[] =  { 1, 4, 45, 6, 10, 8 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    find3Numbers(arr,arr_size,22);
    return 0;
}
