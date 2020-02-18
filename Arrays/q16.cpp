//Algorithm to find the common element in given three sorted arrays
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void findCommonOfThree(int a1[],int a2[],int a3[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;

    while(i<n1 && j<n2 && k<n3)
    {
        if(a1[i]==a2[j] && a2[j]==a3[k])
        {
            cout<<"The Common element is :"<<a1[i]<<"\n";
            i++;j++;k++;
        }
        else if(a1[i]<a2[j])
        {
            i++;
        }
        else if(a2[j]<a3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}
int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);
    findCommonOfThree(ar1, ar2, ar3, n1, n2, n3);

    return 0;
}
