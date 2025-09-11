class Example
{
    public static void main(String args[]) 
    {
        try 
        {
            int a = 0;
            int b = 42 / a;
        }catch(Exception e) 
        {
            System.out.println("Generic Exception catch.");
            System.out.println(e);
        }
        /*catch(ArithmeticException e) 
        {
            System.out.println(“Arithmetic Exception.");
        }*/
    }
}