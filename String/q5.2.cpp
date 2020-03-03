// C++ program to check if two given strings
// are rotations of  each other
# include <bits/stdc++.h>
using namespace std;

/* Function checks if passed strings (str1
   and str2) are rotations of each other */

//check if b is a substring of a
bool isSubstring(string a,string b)
{
    int s=0;int start;int j=0;
    for(int i=0;i<a.length()&&s<b.length();i++,j++)
    {
        if(a[i]==b[0] && s!=0)
        {
            start=i;
        }
        if(a[i]==b[s])
        {
            s++;
        }
        else
        {
            s=0;
            i=start-1;
        }
    }
    if(s==b.length())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;

   string temp = str1 + str1;
   return isSubstring(temp,str2);
} 

  //AACDAACD
/* Driver program to test areRotations */
int main()
{
   string str1 = "AACD", str2 = "ACDA";
   if (areRotations(str1, str2))
     printf("Strings are rotations of each other");
   else
      printf("Strings are not rotations of each other");
   return 0;
}
