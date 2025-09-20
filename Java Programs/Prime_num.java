import java.util.*;
public class Prime_num
{
    public static void main(String args[])
    {
        int num,i,c=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        num=sc.nextInt();
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
                c++;
        }
        if(c==2)
            System.out.println(num+" is a Prime Number");
        else
            System.out.println(num+" is not a Prime Number");
    }
}