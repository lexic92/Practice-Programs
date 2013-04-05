package OutsidePackage;




public class Tester
{
	public static void main(String[] args)
	{
		
		ExampleSourceFiles.PrivateSubclass obj2 = new ExampleSourceFiles.PrivateSubclass();
		System.out.print(obj2);
		//should say "num2: 0 num1: 0"
		obj2.print();
		System.out.print(obj2.num);
	}	

	
}
