package ExampleSourceFiles;

public class SyntaxErrors
{
	//Choose which main method to run by deleting the comment things /* and */ from around it.



	/*
	public static void main( String [ ] args )
	{
		//Extra Semi-colons:

		; //There's an extra one here too.

		System.out.println("Unnecessary semi-colons");; // There's an extra one here
		
		//If you run this code, you'll realize that there are no bugs in it

	}
	*/


	/*
	public static void main( String [ ] args )
	{
		if(1<2);
		{
			System.out.println("1 < 2");
		}
		else
		{
			System.out.println("1 is not < 2");
		}
		//You'll notice it printed out, "One is less than two."  
	}
	*/
		
	/*
	public static void main( String [ ] args )
	{
		//Now try this: It is supposed to skip it now.

		if(2<1);
		{
			System.out.println("2 < 1");
		}

		else
		{
			System.out.println("2 is not < 1");
		}
		//This created an error (while trying to compile) called "'else' without 'if'".

	}
	*/

	public static void main( String [ ] args )
	{
		//Now, this SHOULD compile, and it should not print out "2 < 1."  It should print out the second one.

		if(2<1);
		{
			System.out.println("2 < 1");
		}
		
		System.out.println("End of test.");
		
		// This actually printed out:
		// 2 < 1
		// End of test.
		//But it was only supposed to print out "End of test," because 2 is not < 1.  So, this creates a run-time error instead of a compile-time error.

	}

}

