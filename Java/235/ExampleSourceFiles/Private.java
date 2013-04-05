package ExampleSourceFiles;

public class Private
{
	public static int num;
	

	//There is no constructor, so it should make a default constructor.

	public Private(){
		System.out.println("Private's no-parameters constructor.");
	} 
	public Private(int i)
	{
		System.out.println("You chose the number "+i+"!");
	}

	public String toString()
	{
		return "Private toString: num = " + num;
	}

	public static void print()
	{
		System.out.println("SUPER'S PRINTMETHOD");
	}
}
