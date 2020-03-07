//Arrange given numbers to form the biggest number | Set 1

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int mycompare(string X,string Y)
{
    string XY=X.append(Y);
    string YX=Y.append(X);
    if(stoi(XY)>stoi(YX))
    {
        return 0;
    }
    else
    return 1;
}

void printLargest(vector<string> arr)
{
    sort(arr.begin(),arr.end(),mycompare);
    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}

int main()
{
    vector<string> arr;

    //output should be 6054854654
    arr.push_back("54");
    arr.push_back("546");
    arr.push_back("548");
    arr.push_back("60");
    printLargest(arr);

   return 0;
}
