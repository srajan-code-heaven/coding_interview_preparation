//Find square root of number upto given precision using binary search

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// Function that returns Height at
// which cut should be made

#include <bits/stdc++.h>
using namespace std;

// Function to find square root
// of given number upto given
// precision
float squareRoot(int number, int precision)
{
    int l=0;
    int r=number;
    float ans;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid*mid == number)
        {
            ans=mid;
            break;
        }
        else if(mid*mid>number)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    float increment=0.1;
    for(int i=0;i<precision;i++)
    {
        while(ans*ans<number)
        {
            ans=ans+increment;
        }
        ans=ans-increment;
        increment=increment/10;
    }
    return ans;
}

int main()
{
    // Function calling
    cout << squareRoot(50, 3) << endl;

    // Function calling
    cout << squareRoot(10, 4) << endl;

    return 0;
}
