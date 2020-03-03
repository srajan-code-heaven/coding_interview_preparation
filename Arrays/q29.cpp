
# include<bits/stdc++.h>
using namespace std;

int getNthUglyNo(int n)
{
    int i2=0;int i3=0;int i5=0;
    int next_ugly_no=1;
    int ugly[n];
    int next_ml_2=2;
    int next_ml_3=3;
    int next_ml_5=5;
    ugly[0]=1;
    for(int i=1;i<n;i++)
    {
        next_ugly_no=min(next_ml_2,min(next_ml_3,next_ml_5));
        ugly[i]=next_ugly_no;
        if(next_ugly_no==next_ml_2)
        {
            i2++;
            next_ml_2=2*ugly[i2];
        }
        if(next_ugly_no==next_ml_3)
        {
            i3++;
            next_ml_3=3*ugly[i3];
        }
        if(next_ugly_no==next_ml_5)
        {
            i5++;
            next_ml_5=5*ugly[i5];
        }
    }
    return next_ugly_no;
}
int main()
{
    int n = 150;
    cout << getNthUglyNo(n);
    return 0;
} 
