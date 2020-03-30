//Collect maximum coins before hitting a dead end
// 'C' -->  This cell has coin

// '#' -->  This cell is a blocking cell.
//          We can not go anywhere from this.
// 'E' -->  This cell is empty. We don't get
//          a coin, but we can move from here.
#include<bits/stdc++.h>
using namespace std;
#define R 5
#define C 5
bool isvalid(int i,int j)
{
    return(i>=0 && j>=0 && i<R &&j<C);
}

int maxCoinsRec(char arr[][C],int i,int j,int d)
{
    if(arr[i][j]=='#' || isvalid(i,j)==false)
    {
        return 0;
    }
    int res=arr[i][j]!='E'?1:0;
    if(d==1)
    {
        return res+max(maxCoinsRec(arr,i,j+1,1),maxCoinsRec(arr,i+1,j,0));
    }
    else
    {
        return res+max(maxCoinsRec(arr,i,j-1,0),maxCoinsRec(arr,i+1,j,1));
    }
}

// Driver program to test above function
int main()
{
    char arr[R][C] = { {'E', 'C', 'C', 'C', 'C'},
                       {'C', '#', 'C', '#', 'E'},
                       {'#', 'C', 'C', '#', 'C'},
                       {'C', 'E', 'E', 'C', 'E'},
                       {'C', 'E', '#', 'C', 'E'}
                     };

   // As per the question initial cell is (0, 0) and direction is
    // right

    cout << "Maximum number of collected coins is "
         << maxCoinsRec(arr, 0, 0, 1);

    return 0;
}
