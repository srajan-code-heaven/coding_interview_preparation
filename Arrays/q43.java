//Find the element before which all the elements are smaller than it, and after which all are greater
import java.util.*;
import java.io.*;

public class Main
{
    static int findElement(int arr[],int n)
    {
        int max_left[]=new int[n];
        max_left[0]=Integer.MIN_VALUE;
        int min_right=Integer.MAX_VALUE;
        for(int i=1;i<n;i++)
        {
            max_left[i]=Math.max(arr[i-1],max_left[i-1]);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>max_left[i] && arr[i]<min_right)
            {
                return i;
            }
            min_right=Math.min(arr[i],min_right);
        }
        return -1;
    }
    public static void main (String[] args) {
        /* code */
         int[] arr = {5, 1, 4, 3, 6, 8, 10, 7, 9};
              int n = arr.length;
              System.out.println("Index of the element is " +
              findElement(arr, n));
    }
}
