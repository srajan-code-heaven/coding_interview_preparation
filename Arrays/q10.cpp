
//Find the index in an array such that the sum of elements at lower indices is equal to the sum of elements at higher indices.

#include <bits/stdc++.h>
using namespace std;
void equilibrium(int arr[], int size)
{
    int sum=0;
    int left=0;
    for(int i=0;i<size;i++)
    {
       sum += arr[i];
    }
    for(int i=0;i<size;i++)
    {
       sum -= arr[i];
       if(sum==left)
       {
           cout<<"equilibrium element index is: "<<i;
           break;
       }
       left+=arr[i];
    }

}

/* Driver code */
int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    equilibrium(arr, arr_size);
    return 0;
}
