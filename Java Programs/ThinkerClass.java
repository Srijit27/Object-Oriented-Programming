class Thinker
{
    String green,red;
    void slots(String green, String red)
    {
        this.green=green;
        this.red=red;
    }
    void push_green()
    {
        System.out.println(green);
    }
    void push_red()
    {
        System.out.println(red);
    }
}
public class ThinkerClass
{
    public static void main(String args[])
    {
        Thinker obj=new Thinker();
        obj.slots("Srijit","Roy");
        obj.push_green();
        obj.push_red();
    }
}