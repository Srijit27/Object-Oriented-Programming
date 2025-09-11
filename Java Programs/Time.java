public class Time 
{
    int hour,minute,second;
    Time(int h, int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }   
    void Add(Time ob)
    {
        this.second=this.second+ob.second;
        this.minute=this.minute+(this.second/60);
        this.second=this.second%60;
        this.minute=this.minute+ob.minute;
        this.hour=this.hour+(this.minute/60);
        this.minute=this.minute%60;
        this.hour=this.hour+ob.hour;
        System.out.println("The Added time is:-");
        System.out.println(this.hour+" hours "+this.minute+" minutes "+this.second+" seconds");
    }
    public static void main(String args[])
    {
        Time t1=new Time(2,30,55);
        Time t2=new Time(3,25,85);
        t1.Add(t2);
    }
}
