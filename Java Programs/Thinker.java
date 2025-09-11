public class Thinker
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