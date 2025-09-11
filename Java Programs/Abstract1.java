abstract class Student
{
    int roll;
    static int total=0;
    Student(int r)
    {
        roll=r;
    }
    abstract void compute_marks();
}
class Sports extends Student
{
    int score;
    Sports(int r, int s)
    {
        super(r);
        score=s;
    }
    void compute_marks()
    {
        total+=score;
    }
}
class Academics extends Sports
{
    int marks;
    Academics(int r, int s, int m)
    {
        super(r,s);
        marks=m;
    }
    void compute_marks()
    {
        super.compute_marks();
        total+=marks;
        System.out.println("Roll no is:"+roll);
        System.out.println("Total score is:"+score);
        System.out.println("Total marks is:"+total);
    }
}
public class Abstract1
{
    public static void main(String args[])
    {
        Academics ob=new Academics(2351214,40,200);
        ob.compute_marks();
    }
}