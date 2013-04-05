/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
import java.util.ArrayList;
/**
 *
 * @author lexic92
 */
public class ArrayListReadStrings {
    public static void main(String[] args)
    {
        ArrayList<String> array = getStrings();
        for(int i = 0; i < array.size(); i++)
        {
            System.out.println(array.get(i));
        }


    }

    public static ArrayList<String> getStrings()
    {
        Scanner in = new Scanner(System.in);
        ArrayList<String> array = new ArrayList<String>();

        System.out.println("Enter strings. Terminate with empty line. (using arraylist)");

        while(in.hasNextLine())
        {
            String currentLine = in.nextLine();
            if(currentLine.equals(""))
            {
                break;
            }

            array.add(currentLine);
        }
        System.out.println("Done reading");
        return array;
    }
}
