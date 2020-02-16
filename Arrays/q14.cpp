//Algorithm to find the number of triangles that can be formed with three different array elements as three sides
//of triangles, for a given unsorted array of n elements
#include <bits/stdc++.h>
using namespace std;
void NoOfTraingles(int arr[], int size)
{
    int count=0;
    sort(arr,arr+size);
    for(int i=0;i<size-2;i++)
    {
        int k=i+2;
        for(int j=i+1;j<size-1;j++)
        {
            while(k<size && arr[i]+arr[j]>arr[k])
            {
                k++;
            }
            if(k>j)
            {
                count = count + k - j - 1; 
            }
        }
    }
    cout<<count;
}

/* Driver code */
int main()
{
    int arr[] = { 4, 3, 5, 7, 6 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    NoOfTraingles(arr,arr_size);
    return 0;
}
