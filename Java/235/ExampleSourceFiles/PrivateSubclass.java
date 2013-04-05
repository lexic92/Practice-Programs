package ExampleSourceFiles;

public class PrivateSubclass extends Private
{
	int num2;
	//This class should call the base class zero-param constructor, then apply default constructor for itself.
	
	public PrivateSubclass()
	{	
		super(4);
		
		System.out.print("PrivateSubclass constructor.");
	}
	public String toString()
	{
		
		return "Subclass toString: num2: " + num2 + "num: " + num;
	}
	public void print()
	{
		//super.print();
		System.out.println("SUB'S PRINTMETHOD");
	}
	

}
