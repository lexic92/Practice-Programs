/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author lexic92
 */
public class ExtendsTest extends Test{

    public static void main(String[] args)
    {
        ExtendsTest o = new ExtendsTest();

        o.apple(1, "");
        String[] args2 = {};
        Test.main(args2);
    }
   void apple(int i, String j){
    System.out.println("Hey");
    
    }

}
