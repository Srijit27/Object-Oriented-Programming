public class Shape 
{
    int volume(int l, int b, int h)
    {
        return l*b*h;
    }
    double volume(int r)
    {
        return (4/3)*3.14*r*r*r;
    }
    double volume(int r, int h)
    {
        return 3.14*r*r*h;
    }
    int surface_area(int l, int b, int h)
    {
        return 2*(l*b+b*h+h*l);
    }
    double surface_area(int r)
    {
        return 4*3.14*r*r;
    }
    double surface_area(int r, int h)
    {
        return 2*3.14*r*(r+h);
    }
    public static void main(String args[])
    {
        Shape ob=new Shape();
        System.out.println("\t-:For Parallelepiped:-");
        int pv=ob.volume(4,5,6);
        double psa=ob.surface_area(4,5,6);
        System.out.println("Volume:"+pv+"| Surface Area:"+psa);
        System.out.println("\t-:For Sphere:-");
        double sv=ob.volume(4);
        double ssa=ob.surface_area(4);
        System.out.println("Volume:"+sv+"| Surface Area:"+ssa);
        System.out.println("\t-:For Cylinder:-");
        double cv=ob.volume(5,6);
        double csa=ob.surface_area(5,6);
        System.out.println("Volume:"+cv+"| Surface Area:"+csa);
    }
}
