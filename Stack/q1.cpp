//Design a stack that supports getMin() in O(1) time and O(1) extra space

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct mystack
{
    stack<int> s;
    int minele;

    int top;

    void getMin()
    {
        if(s.empty())
        { 
            cout<<"stack is empty";
        }
        else
            cout<<"minimum element is :"<< minele<<"\n";
    }
    void push(int x)
    {
        if(s.empty())
        {
            s.push(x);
            minele=x;
            cout<<"number inserted :"<<x<<"\n";
        }
        else
        {
           if(x<minele)
           {
               s.push(2*x-minele);
               minele=x;
           }
           else
              s.push(x);
        cout<<"number inserted :"<<x<<"\n";
        }
    }

    void pop()
    {
        if(s.empty())
        {
            cout<<"stack is empty";
        }
        else
        {
        cout << "Top Most Element Removed: ";
        int x=s.top();
        s.pop();
        if(x<minele)
        {
            cout<<minele<<"\n";
            minele=2*minele-x;
        }
        else
        {
            cout<<x<<"\n";
        }
        }
}
};



int main()
{

    mystack s;
    s.push(3);
    s.push(5);
    s.getMin();
    s.push(2);
    s.push(1);
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    return 0;
}
