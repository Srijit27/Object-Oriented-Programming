import java.util.*;
class Multiply
{
    int arr[][],r,c;
    void input()
    {
        int i,j;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no of rows");
        r=sc.nextInt();
        System.out.println("Enter the no of columns");
        c=sc.nextInt();
        arr=new int[r][c];
        System.out.println("Enter the matrix elements");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
    }
    void display()
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.print("\n");
        }
    }
    void Mul(Multiply ob)
    {
        int result[][]=new int[this.r][ob.c];
        int i,j,k;
        for(i=0;i<this.r;i++)
        {
            for(j=0;j<ob.c;j++)
            {
                result[i][j]=0;
            }
        }
        for(i=0;i<this.r;i++)
        {
            for(j=0;j<ob.c;j++)
            {
                for(k=0;k<this.c;k++)
                {
                    result[i][j]+=(this.arr[i][k]*ob.arr[k][j]);
                }
            }
        }
        System.out.println("The resultant Matrix is:-");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(result[i][j]+" ");
            }
            System.out.print("\n");
        }
    }
}
public class Matrix_mul
{
    public static void main(String args[])
    {
        Multiply ob1=new Multiply();
        Multiply ob2=new Multiply();
        //Addition ob3=new Addition();
        System.out.println("Enter the elements of Matrix 1:-");
        ob1.input();
        System.out.println("Enter the elements of Matrix 2:-");
        ob2.input();
        System.out.println("The elements of Matrix 1:-");
        ob1.display();
        System.out.println("The elements of Matrix 2:-");
        ob2.display();
        if(ob1.c==ob2.r)
            ob1.Mul(ob2);
        else   
            System.out.println("Incorrect dimensions..!!");
    }
}