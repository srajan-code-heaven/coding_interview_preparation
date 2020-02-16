//Algorithm to find two repeating numbers in a given array

#include <bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size)
{
    int *count=new int[sizeof(int)*(size-2)];
    int i;
    for(i=0;i<size;i++)
    {
        if(count[arr[i]]==1)
        {
            cout<<arr[i]<<" ";
        }
        else
            count[arr[i]]++;

    }


}

/* Driver code */
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

   printRepeating(arr, arr_size);


    return 0;
}




// alternatively use maths
// Let summation of all numbers in array be S and product be P
//
// X + Y = S – n(n+1)/2
// XY = P/n!
//
// Using above two equations, we can find out X and Y. For array = 4 2 4 5 2 3 1, we get S = 21 and P as 960.
//
// X + Y = 21 – 15 = 6
//
// XY = 960/5! = 8
//
// X – Y = sqrt((X+Y)^2 – 4*XY) = sqrt(4) = 2
//
// Using below two equations, we easily get X = (6 + 2)/2 and Y = (6-2)/2
// X + Y = 6
// X – Y = 2
