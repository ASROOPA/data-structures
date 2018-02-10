package packages;

public class LinkedList {
	int data;
	LinkedList next;
	LinkedList(int value)
	{
		data=value;
	}
	public static void main(String args[])
	{
		LinkedList head=new LinkedList(10);
		LinkedList first=new LinkedList(20);
		head.next=first;
		first.next=null;
		LinkedList temp=head;
		while(temp!=null)
		{
			System.out.println(temp.data);
			temp=temp.next;
		}
		
	}
}
