package ExampleSourceFiles;

public abstract class Private
{
	public static int num;
	

	//There is no constructor, so it should make a default constructor.

	public Private(){
		System.out.println("It's different!!!");
	} 
	public Private(int i)
	{
		System.out.println("You chose the number "+i+"!");
	}

	public String toString()
	{
		return "Private toString: num = " + num;
	}

	abstract public void print();
}
