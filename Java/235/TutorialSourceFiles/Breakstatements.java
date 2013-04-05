package ExampleSourceFiles;

public class Breakstatements
{

	/*
	public static void main( String [ ] args )
	{

		int i = 1;


		while(i <= 5) //iterate 5 times?
		{
			System.out.println("Loop # " + i); //Print out what time this is
			if (i == 4)
				break; //exit loop during 4th time.
			i++;
		}
		System.out.println("");
		System.out.println("Just Broke Out: i= "+i); //Print out what time it broke out on. Should be 4.
		
		//Yep, it worked!

	}
	*/
	/*
	public static void main( String [ ] args )
	{
		boolean yes = true;
		outer:		
		if (yes)
		{
			System.out.println("Entered outer loop.");
			inner:
			if (yes)
			{
				System.out.println("Entered inner loop.");
				break outer;			
			}
			System.out.println("Second-part of outer loop.");
		}
		System.out.println("First statement AFTER outer loop has completed.");
		//It should only print "Entered outer loop," "Entered inner loop," and "First statement AFTER outer loop has completed."
		//It worked.
	}
	*/

	/**
	Same test, but with weird loop names. Just replace the label after "break" with whatever you want to test.
	*/
	public static void main( String [ ] args )
	{
		boolean yes = true;
				
		System.out.println("FirstTest");Red1:if (yes)
		{
			System.out.println("Entered outer loop.");
			blue:if (yes)
			{
				System.out.println("Entered inner loop.");
				break Red1;			
			}
			System.out.println("Second-part of outer loop.");
		}
		System.out.println("First statement AFTER outer loop has completed.");
		// This code worked.
		// You must have an identifier (that does NOT start with a number), and a colon, before the If or while stuff.
	}


}
