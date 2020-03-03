/* Function removes duplicate characters from the string
This function work in-place and fills null characters
in the extra space left */
#include <bits/stdc++.h>
using namespace std;

char *removeDups(char str[])
{
  unordered_set<char> set;
  int s=0;
  for(int i=0;str[i]!='\0';i++)
  {
      if(set.find(str[i])==set.end())
      {
          set.insert(str[i]);
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
