import java.util.*;
class Vehicle
{
    int km,oil_consumed;
    double mileage_calculation(int km,int oil_consumed)
    {
        this.km=km;
        this.oil_consumed=oil_consumed;
        return (double)(km/oil_consumed);
    }
}
class TwoWheeler extends Vehicle
{
    String name,colour;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the bike name");
        name=sc.nextLine();
        System.out.println("Enter the bike colour");
        colour=sc.nextLine();
        System.out.println("Enter the kms travelled");
        km=sc.nextInt();
        System.out.println("Enter the oil consumed");
        oil_consumed=sc.nextInt();
    }
    void display()
    {
        System.out.println("Bike name:"+name);
        System.out.println("Bike colour:"+colour);
        System.out.println("Total mileage:"+super.mileage_calculation(km, oil_consumed));
    }
}
class FourWheeler extends Vehicle
{
    String name,colour;
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the car name");
        name=sc.nextLine();
        System.out.println("Enter the car colour");
        colour=sc.nextLine();
        System.out.println("Enter the kms travelled");
        km=sc.nextInt();
        System.out.println("Enter the oil consumed");
        oil_consumed=sc.nextInt();
    }
    void display()
    {
        System.out.println("car name:"+name);
        System.out.println("car colour:"+colour);
        System.out.println("Total mileage:"+super.mileage_calculation(km, oil_consumed));
    }
}
public class SimpleInheritance
{
    public static void main(String args[])
    {
        TwoWheeler ob1=new TwoWheeler();
        ob1.input();
        ob1.display();
        FourWheeler ob2=new FourWheeler();
        ob2.input();
        ob2.display();
    }
}
