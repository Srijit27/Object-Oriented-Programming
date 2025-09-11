public class Box
{
    int height,width,length;
    Box()
    {
        height=0;
        width=0;
        length=0;
    }
    Box(int h, int w, int l)
    {
        height=h;
        width=w;
        length=l;
    }
    int volume()
    {
        return height*width*length;
    }
    void equals(Box ob)
    {
        if(this.height==ob.height && this.width==ob.width && this.length==ob.length)
            System.out.println("Boxes are equal");
        else
            System.out.println("Boxes are not equal");
    }
    public static void main(String args[])
    {
        Box ob1=new Box(4,5,6);
        Box ob2=new Box(4,5,6);
        ob1.equals(ob2);
        System.out.println("Volume of Box 1 is:"+ob1.volume()+" units");
        System.out.println("Volume of Box 2 is:"+ob2.volume()+" units");
    }
}