/* Function removes duplicate characters from the string
This function work in-place and fills null characters
in the extra space left */
#include <bits/stdc++.h>
using namespace std;


#define size 256
char *removeDups(char str[])
{
    bool charcount[size]={0};
    int s=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(charcount[str[i]]==0)
        {
            charcount[str[i]]=1;
            str[s++]=str[i];
        }
    }
    str[s]='\0';
    return str;
}

int main()
{
  char str[] = "geeksforgeeks";
  cout << removeDups(str);
  return 0;
}
