public class CashRegisterTester {
	
	

	public static void main()
	{
		CashRegister obed = new CashRegister();
		obed.addItem(1);
		obed.addItem(2);
		obed.addItem(.25);
		
		System.out.println(obed.getTotal());
		
	}

}
