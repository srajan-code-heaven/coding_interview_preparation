#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int getmindp(vector<vector<int>> *mcost,vector<vector<int>> *cost,int m,int n,int size)
{
    if(m==0 && n==0)
    {
        return cost[m][n];
    }
    else if(m<0 || n<0 || m>size-1 ||n>size-1)
    {
        return INT_MAX;
    }
    else
    {
        if(mcost[m][n]!=-1)
        {
            return mcost[m][n];
        }
        else
        {
            mcost[m][n]=cost[m][n]+min(getmindp(mcost,cost,m-1,n,size),min(getmindp(mcost,cost,m+1,n,size),min(getmindp(mcost,cost,m,n-1,size),getmindp(mcost,cost,m,n+1,size))));
            return mcost[m][n];
        }
    }
}
void getmincost(vector<vector<int>> *cost,int n)
{
    	//int mcost[n][n];
    	vector<vector<int>>mcost(n, vector<int>(n));
	    memset(mcost,-1,sizeof(mcost));
	    cout<<getmindp(&mcost,&cost,n,n,n);
}
int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	     vector<vector<int>>cost(n, vector<int>(n));
	    int cost[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>cost[i][j];
	        }
	    }

	    getmincost(&cost,n);
	}
	return 0;
}
