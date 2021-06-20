//Algorithm to rotate array of size 'n' by 'd' elements
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

void leftrotatearray(int arr[],int k,int arr_size)
{
    int set_size=gcd(arr_size,k);
    for(int i=0;i<set_size;i++)
    {
        int j=i;
        int temp=arr[i];
        while(true)
        {
            int l=j+k;
            if(l>arr_size-1)
            {
                l=l-arr_size;
            }
            if(l==i)
            {
                break;
            }
            arr[j]=arr[l];
            j=l;
        }
        arr[l]=temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{    int A[]={1,2,3,4,5,6,7};
    int arr_size=sizeof(A)/sizeof(int);
    leftrotatearray(A,2,arr_size);
    printArray(A,arr_size);
    return 0;
}
