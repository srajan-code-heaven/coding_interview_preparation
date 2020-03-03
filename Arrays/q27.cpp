//Program to add two fractions

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
void lowest(int &den3,int &num3)
{
    int temp=gcd(den3,num3);
    den3=den3/temp;
    num3=num3/temp;
}

void addFraction(int num1,int den1,int num2,int den2,int &num3,int &den3)
{
    den3=den1*den2/(gcd(den1,den2));
    num3=(den3/den1)*num1 + (den3/den2)*num2;
     lowest(num3,den3);
}

int main()
{
    int num1=1, den1=500, num2=2, den2=1500, den3, num3;
    addFraction(num1, den1, num2, den2, num3, den3);
    printf("%d/%d + %d/%d is equal to %d/%d\n", num1, den1,
                                   num2, den2, num3, den3);
    return 0;
}
