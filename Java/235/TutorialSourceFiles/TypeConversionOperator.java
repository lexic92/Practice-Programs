package ExampleSourceFiles;

public class TypeConversionOperator
{

	public static void main( String [ ] args )
	{
		double result;
		int six = 6;
		int ten = 10;
		
		result = six / ten; //double result = (integer 6) / (integer 10)

		System.out.println("result: " + result); // result = 0.
		int remainder = 6 % 10;
		
		System.out.println("result's remainder: " + remainder); //remainder = 6.

		
		//Better way to do this:

		double secondResult;
		int secondSix = 6;
		int secondTen = 10;

		secondResult = (double) secondSix / secondTen; 
		// secondResult = (double 6) / (integer 10), which turns the whole thing to a double.

		System.out.println("SecondResult: " + secondResult); //secondResult = 0.6

		
		


		//Now, test if it works on three ints and one of them converted to a double.
		
		int a = 6;
		int b = 10;
		int c = 10;

		System.out.println("1: "+ a / b / c); // 6 / 10 / 10.  6 / 10 is 0 remainder 10, 0 / 10 is 0. Answer: 0.
		System.out.println("2: "+ (double) a / b / c); //double-6 / 10 is .6, double .6 / 10 is .06. Answer: .06.
		System.out.println("3: "+ a / (double) b / c); //6 / double-10 is .6, double .6 / 10 is .06. Answer: .06.
		System.out.println("4: "+ a / b / (double) c); //int 6 / int 10 is int 0, int 0 / double 10 is 0. Answer: 0.


		//Test other types of conversions here in the future.
		
	}
}
