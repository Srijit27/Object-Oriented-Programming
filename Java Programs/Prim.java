import java.util.*;
class Node implements Comparable<Node>
{
    int vertex,key;
    public Node(int vertex, int key)
    {
        this.vertex=vertex;
        this.key=key;
    }
    public int compareTo(Node other)
    {
        return this.key-other.key;
    }
}
public class Prim
{
    public static void main(String args[])
    {
        int i;
        PriorityQueue<Node> pq= new PriorityQueue<>();
        pq.add(new Node(0,10));
        pq.add(new Node(1,30));
        pq.add(new Node(2,20));
        pq.add(new Node(3,40));
        for(i=1;i<=4;i++)
        {
            System.out.println(pq.poll());
        }
    }
}