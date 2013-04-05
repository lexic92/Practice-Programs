package ExampleSourceFiles;

public class RuntimeErrors
{
	/*
	public static void main( String [ ] args )
	{
		//When it says "statement", does that mean everything on the same line?
		//Test:
	
		if(2<1)
			System.out.println("Hello"); System.out.println("Goodbye");
		
		//When it runs, it prints "Goodbye." That proves that a statement is one thing with a ";".

		//What about if it's a multiple-thing statement??
		
		if(3<2)
			System.out.println("3<2"), System.out.println("That is false though.");

	}
	*/







	/*
	public static void main( String [ ] args )
	{
		//What about if it's a multiple-thing statement??
		
		if(3<2)
			System.out.println("3<2"), System.out.println("That is false though.");
		//This is an error. (';' expected). So, one is not allowed to put a , between System.out.print's.

	}
	*/





	public static void main( String [ ] args )
	{

		

		//What about if it's a multiple-thing statement that DOES work???
		int num1, num2;

		if(3<2)
		{
			num1 = 10, num2 = 1;
		}
		System.out.println(num1 + num2);
		

	}






}
