//Find duplicates in O(n) time and O(1) extra space
#include <bits/stdc++.h>
using namespace std;

void printRepeatinginO1space(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        arr[arr[i]%10]= arr[arr[i]%10] + 10;
        if(arr[arr[i]%10]>19)
        {
            cout<<arr[i]%10<<" ";
        }
    }
}

/* Driver code */
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printRepeatinginO1space(arr, arr_size);
    return 0;
}
