import java.util.*;
public class Complex
{
    int real,img;
    Complex()
    {
        real=0;
        img=0;
    }
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the real part:");
        real=sc.nextInt();
        System.out.print("Enter the imaginary part:");
        img=sc.nextInt();
    }
    void display()
    {
        if(img>0)
            System.out.println("The Complex Number is:"+real+"+"+img+"i");
        else
            System.out.println("The Complex Number is:"+real+""+img+"i");
    }
    void Add(Complex ob)
    {
        this.real=this.real+ob.real;
        this.img=this.img+ob.img;
    }
    public static void main(String args[])
    {
        Complex c1=new Complex();
        Complex c2=new Complex();
        System.out.println("Enter the first Complex Number:-");
        c1.input();
        System.out.println("Enter the second Complex Number:-");
        c2.input();
        System.out.println("The first complex number is:-");
        c1.display();
        System.out.println("The second complex number is:-");
        c2.display();
        c1.Add(c2);
        System.out.println("The new Complex number after addition is:-");
        c1.display();
    }
}