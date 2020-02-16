//Find the Number Occurring Odd Number of Times

#include <bits/stdc++.h>
using namespace std;

void getOddOccurrence(int A[],int arr_size)
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
      if(i.second%2!=0)
      {
          cout<<i.first<<" ";
      }
  }
}

int main()
{
    int A[]={ 2, 3, 5, 4, 5, 2, 4,3, 5, 2, 4, 4, 2 };
    int arr_size=sizeof(A)/sizeof(int);
    getOddOccurrence(A,arr_size);
}
