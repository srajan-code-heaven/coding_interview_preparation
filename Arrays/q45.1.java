/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.io.*;
import java.util.*;
public class Main
{
    public static void largest(String arr[])
    {
        Arrays.sort(arr,new Comparator<String>()
        {
            public int compare(String s1,String s2)
            {
                // int a=Integer.parseInt(s1+s2);
                // int b=Integer.parseInt(s2+s1);
                // if(a>b)
                // {
                //     return -1;
                // }
                // else
                // return 1;
                String XY=s1+s2;
                String YX=s2+s1;
                //return XY.compareTo(YX);   //ascending order sort
                return YX.compareTo(XY);    //descending order sort

            }
        });
        for(String t:arr)
        {
            System.out.print(t);
        }
    }
	public static void main(String[] args) {
		String arr[]=new String[]{"54","546","548","60"};
		for(String t:arr)
        {
            System.out.print(t);
        }
         System.out.println();

		largest(arr);
	}
}
