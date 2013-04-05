package ExampleSourceFiles;

public class PrefixPostfixIncrement
{
	public static void main( String [ ] args )
	{
		int original = 0;
		int newOne = ++original; //Adds one to original, then returns it.

		/* This is equivalent to:

		int original = 0;
		original = original +1;
		int newOne = original;

		*/

		System.out.println("newOne: " +newOne); // should be 1.
		System.out.println("original: " +original); // should be 1.





		int secondOriginal = 0;
		int secondNewOne = secondOriginal++;

		/*This is equivalent to:

		int secondOriginal = 0;
		int secondNewOne = secondOriginal;
		secondOriginal = secondOriginal + 1;

		*/

		System.out.println("secondNewOne: " +secondNewOne); //Should be 0.
		System.out.println("secondOriginal: " +secondOriginal); //Should be 1.

		
	}
}
