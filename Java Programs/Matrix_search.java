import java.util.*;
class Matrix
{
    int arr[][],size;
    Scanner sc=new Scanner(System.in);
    void input()
    {
        int i,j;
        System.out.println("Enter the size of the array");
        size=sc.nextInt();
        arr=new int[size][size];
        System.out.println("Enter the array elements");
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
    }
    void display()
    {
        System.out.println("The array elements are:-");
        int i,j;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println("\n");
        }
    }
    void search()
    {
        int i,j,num;
        boolean flag=false;
        System.out.println("Enter the number to be searched");
        num=sc.nextInt();
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(arr[i][j]==num)
                {
                    System.out.println("Element found at row "+(i+1)+" and column "+(j+1));
                    flag=true;
                }
            }
        }
        if(flag==false)
            System.out.println("Element is not present");
    }
}
public class Matrix_search
{
    public static void main(String args[])
    {
        Matrix ob=new Matrix();
        ob.input();
        ob.display();
        ob.search();
    }
}