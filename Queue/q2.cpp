
//Find the first circular tour that visits all petrol pumps
#include <bits/stdc++.h>
using namespace std; 

struct petrolPump
{
    int petrol;
    int distance;
};

int printTour(petrolPump arr[],int n)
{
    int start=0;
    int end=1;
    int current=arr[0].petrol-arr[0].distance;
    while(current<0 || start!=end)
    {
        while(current<0 && start!=end)
        {
            current=current-(arr[start].petrol-arr[start].distance);
            start=(start+1)%n;
            if(start==0)
            {
                return -1;
            }
        }
        current=current+arr[end].petrol-arr[end].distance;
        end=(end+1)%n;
    }
    return start;
}

/* Driver program to test above function*/
int main()
{
    petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};

    int n = sizeof(arr)/sizeof(arr[0]);
    int start = printTour(arr, n);

    (start == -1)? cout<<"No solution": cout<<"Start = "<<start;

    return 0;
}
