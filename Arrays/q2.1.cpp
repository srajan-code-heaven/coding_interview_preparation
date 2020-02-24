//Find a majority element in an array of size 'n'
#include <bits/stdc++.h>
using namespace std;

int findcandidate(int A[],int arr_size)
{
    int count=0;
    int maj=A[0];
    for(int i=0;i<arr_size;i++)
    {
        if(A[i]==maj)
        {
            count++;
        }
        else
          count --;

        if(count==0)
        {
            maj=A[i];
            count=1;
        }
    }
    return maj;

}

int main()
{
    int A[]={1, 3, 1, 3, 3};
    int arr_size=sizeof(A)/sizeof(int);
    int maj=findcandidate(A,arr_size);
    int count=0;
    for(int i=0;i<arr_size;i++)
    {
        if(A[i]==maj)
        {
            count++;
        }
    }
    if(count>arr_size/2)
    {
        cout<<"majority element found :"<<maj;
    }
    else
        cout<<"no majority element found";
}
