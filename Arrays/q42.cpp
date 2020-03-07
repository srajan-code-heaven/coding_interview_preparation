//Stock Buy Sell to Maximize Profit
import java.util.ArrayList;

class interval
{
    int buy;
    int sell;
}

public class Main
{
    void profit(int arr[],int n)
    {
        ArrayList<interval> A=new ArrayList<interval>();
        int i=0;
        int profit_val=0;
        int count=0;
        while(i<n-1)
        {
            while(i!=n-1 && arr[i]>arr[i+1])
            {
                i++;
            }
            interval in=new interval();
            in.buy=i++;
            while(i!=n && arr[i-1]<arr[i])
            {
                i++;
            }
            in.sell=--i;
            A.add(in);
            profit_val=profit_val+arr[in.sell]-arr[in.buy];
            count++;
        }
         if (count == 0)
            System.out.println("There is no day when buying the stock "
                               + "will make profit");
        else
            for (int j = 0; j < count; j++)
                System.out.println("Buy on day: " + A.get(j).buy
                                   + "        "
                                   + "Sell on day : " + A.get(j).sell);

        System.out.println("Max Profit is :"+profit_val);

        return;
    }

public static void main (String[] args) {
    /* code */
    Main stock=new Main();
    int price[]={100,180,260,310,40,535,695};
    int n=price.length;
    stock.profit(price,n);
}
}
