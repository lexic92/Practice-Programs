package ExampleSourceFiles;

public class Octalhexadecimal
{
	public static void main( String [ ] args )
	{
		int z = 0300; //octal notation: 3 * 8^2; 0 * 8^1; 0* 8^0. 
				// = 192.
		int a = 15; //Decimal notation: 15

		System.out.println(z+a); //192 + 15 = 207

		int b = 0x1; //Hexadecimal notation: 1 * 16^0
				// = 1

		int c = 0X10; //Hexadecimal notation: 0X  1* 16^1 = 16
		System.out.println(c); //16

		System.out.println(b+a); //1 + 15 = 16
		
	}
}
