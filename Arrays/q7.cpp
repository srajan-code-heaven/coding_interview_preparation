//Find the maximum difference between two elements such that larger element appears after the smaller element

#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int size)
{
  int max_diff=arr[1]-arr[0];
  int min_ele=arr[0];
  for(int i=1;i<size;i++)
  {
      if(arr[i]-min_ele > max_diff)
      {
          max_diff=arr[i]-min_ele;
      }
      if(arr[i]<min_ele)
      {
          min_ele=arr[i];
      }
  }
        return max_diff;

}

/* Driver code */
int main()
{
    int arr[] ={1, 2, 90, 10, 110};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ans=maxDiff(arr, arr_size);

    cout << "Maximum Difference is :"<<ans;

    return 0;
}
