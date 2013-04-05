/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;

/**
 *
 * @author lexic92
 */
public class ArraysReadStrings {

    public static String[] getStrings()
    {
        Scanner in = new Scanner(System.in);
        String[] array = new String[5];
        int itemsRead = 0;

        System.out.println("Enter strings. Terminate with empty line.");

        while(in.hasNextLine())
        {
            String nextLineString = in.nextLine();

            //If there's an empty line, stop.
            if(nextLineString.equals(""))
                    break;

            //If the array is full...
            if(itemsRead == array.length)                   //Number of elements is the same.
                array = resize(array, array.length * 2);    //Doubles the array size
                array[itemsRead] = nextLineString;          //the position at the number of elements (which is actually one more than the last position) becomes the index of the next string.
                itemsRead++;                                //It just saw another item, so increment this variable.
        }
        return resize(array, itemsRead); //Returns the array with the size of items read.
    }

    /**
     * Resize a String[] array
     * @return a new array
     */
    public static String[] resize(String[] array, int newSize)
    {
        String[] original = array;                                      //("original" has the same address as "array."
        int numberOfElementsToCopy = Math.min(original.length, newSize);//It will copy the number of elements in the original array, or the new size number, whichever is smaller. So, if you put
                                                                        //If you put (array8elements, newSize10), then it will actually be size a size of 8.  So, the new size feature is only good for shrinking.

        array = new String[newSize];//The formal parameter, array, gets a new address. It is an array with the new size the user typed in.
        for(int i = 0; i < numberOfElementsToCopy; i++)
        {
            array[i] = original[i]; //The first [numElementsTocopy] elements of the original array go into the array.
        }
        return array;
    }

    public static void main(String[] args)
    {
        String[] array = getStrings();
        for(int i = 0; i < array.length; i++)
        {
            System.out.println(array[i]);
        }
    }
}
