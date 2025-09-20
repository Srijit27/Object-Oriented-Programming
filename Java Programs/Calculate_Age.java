import java.util.*;
class Person
{
    String name;
    int birth[]=new int[3];
    Person()
    {
        name=" ";
        for(int i=0;i<birth.length;i++)
            birth[i]=0;
    }
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the name");
        name=sc.nextLine();
        System.out.println("Enter the birth day");
        birth[0]=sc.nextInt();
        System.out.println("Enter the birth month");
        birth[1]=sc.nextInt();
        System.out.println("Enter the birth year");
        birth[2]=sc.nextInt();     
    }
    void display()
    {
        System.out.println("Name is:"+name);
        System.out.println("Date of birth is:"+birth[0]+"/"+birth[1]+"/"+birth[2]);
        Calculator ob=new Calculator();
        System.out.println("Final age is:"+ob.age(birth));
    }
}
class Calculator
{
    int age(int birth[])
    {
        Calendar ob=Calendar.getInstance();
        int cd=ob.get(Calendar.DATE);
        int cm=ob.get(Calendar.MONTH);
        int cy=ob.get(Calendar.YEAR);
        int a=cy-birth[2];
        if(birth[1]>cm || birth[1]==cm && birth[0]>cd)
            a--;
        return a;
    }
}
public class Calculate_Age
{
    public static void main(String args[])
    {
        Person p=new Person();
        p.input();
        p.display();
    }
}