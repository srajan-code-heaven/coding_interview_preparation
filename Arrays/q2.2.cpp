//Find a majority element in an array of size 'n'


#include <bits/stdc++.h>
using namespace std;

void findmajorityele(int A[],int arr_size)
{
  unordered_map<int,int> m;
  int maj;
  for(int i=0;i<arr_size;i++)
  {
      m[A[i]]++;
  }
  int count=0;
  for(auto i:m)
  {
      if(i.second > arr_size/2)
      {
          count=1;
          maj=i.first;
          cout<<"majority element is :"<<maj;
          break;
      }
  }

  if(count==0)
  {
      cout<<"No majority element found";
  }

}

int main()
{
    int A[]={1, 3, 1, 3, 2};
    int arr_size=sizeof(A)/sizeof(int);
    findmajorityele(A,arr_size);
}
