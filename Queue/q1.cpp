//Reversing a Queue using another Queue
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

queue<int> reverse(queue<int> q)
{
    queue<int> ans;
    int s=q.size();
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<q.size()-1;j++)
        {
            q.push(q.front());
            q.pop();
        }
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
int main()
{
    queue<int> q;

    // Insert elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q = reverse(q);

    // Print the queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
