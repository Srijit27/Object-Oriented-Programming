abstract class Shape
{
    String name;
    public Shape(String name)
    {
        this.name=name;
    }
    abstract double volume();
    abstract double surface_area();
    void display()
    {
        System.out.println("Shape is:"+name);
        System.out.println("Volume is:"+volume());
        System.out.println("Surface Area is:"+surface_area());
        System.out.println("\n");
    }
}
class Parallelepiped extends Shape
{
    int l,b,h;
    Parallelepiped(int l, int b, int h)
    {
        super("Parallelepiped");
        this.l=l;
        this.b=b;
        this.h=h;
    }
    double volume()
    {
        return l*b*h;
    }
    double surface_area()
    {
        return 2*(l*b+b*h+h*l);
    }
}
class Sphere extends Shape
{
    int r;
    Sphere(int r)
    {
        super("Sphere");
        this.r=r;
    }
    double volume()
    {
        return (4/3)*3.14*r*r*r;
    }
    double surface_area()
    {
        return 4*3.14*r*r;
    }
}
class Cylinder extends Shape
{
    int r,h;
    Cylinder(int r, int h)
    {
        super("Cylinder");
        this.r=r;
        this.h=h;
    }
    double volume()
    {
        return 3.14*r*r*h;
    }
    double surface_area()
    {
        return 2*3.14*r*(r+h);
    }
}
public class Shape_inheritance
{
    public static void main(String args[])
    {
        Parallelepiped p=new Parallelepiped(4,5,6);
        p.display();
        Sphere s=new Sphere(5);
        s.display();
        Cylinder c=new Cylinder(4,5);
        c.display();
    }
}