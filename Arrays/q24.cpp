//Minimum Number of Platforms Required for a Railway/Bus Station

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[],int dep[],int n)
{
   sort(arr,arr+n);
   sort(dep,dep+n);
   int ans=1;
   int pf_req=1;
   int i=1;
   int j=0;
   while(i<n && j<n)
   {
       if(arr[i]<=dep[j])
       {
           pf_req++;
           if(pf_req>ans)
           {
               ans=pf_req;
           }
           i++;
       }
       else
       {
           pf_req--;
           j++;
       }
   }
   return ans;
}

int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500,1800};
    int dep[] = { 910, 1200, 1120, 1130, 1900,2000};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}
