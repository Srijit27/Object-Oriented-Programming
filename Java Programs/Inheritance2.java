class Vehicle
{
    int wheel;
    Vehicle(int a)
    {
        wheel=a;
    }
    void display()
    {
        System.out.println("Wheel "+wheel);
    }
}
class Car extends Vehicle
{
    String manufacturer;
    Car(int w,String m)
    {
        super(w);
        manufacturer=m;
    }
    void display()
    {
        super.display();
        System.out.println("Manufacturer "+manufacturer);
    }
}
public class Inheritance2
{
    public static void main(String args[])
    {
        Car c=new Car(4,"BMW");
        c.display();
        Vehicle v=new Car(4,"Audi");
        v.display();
    }
}