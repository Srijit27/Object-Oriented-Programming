import java.util.*;
class Addition
{
    int arr[][],size;
    void input()
    {
        int i,j;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the matrix");
        size=sc.nextInt();
        arr=new int[size][size];
        System.out.println("Enter the matrix elements");
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
        int i,j;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.print("\n");
        }
    }
    void Add(Addition ob)
    {
        int i,j;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                this.arr[i][j]=this.arr[i][j]+ob.arr[i][j];
            }
        }
    }
}
public class Matrix_add
{
    public static void main(String args[])
    {
        Addition ob1=new Addition();
        Addition ob2=new Addition();
        //Addition ob3=new Addition();
        System.out.println("Enter the elements of Matrix 1:-");
        ob1.input();
        System.out.println("Enter the elements of Matrix 2:-");
        ob2.input();
        System.out.println("The elements of Matrix 1:-");
        ob1.display();
        System.out.println("The elements of Matrix 2:-");
        ob2.display();
        ob1.Add(ob2);
        System.out.println("The elements of resultant Matrix is:-");
        ob1.display();
    }
}