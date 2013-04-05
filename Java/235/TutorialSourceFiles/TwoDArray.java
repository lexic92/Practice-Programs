/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Arrays;
/**
 *
 * @author lexic92
 */
public class TwoDArray {

    public static void main(String[] args)
    {
        String  greetings[][][]= {     { {"000","001"},    //Array Row Column
                                         {"010","011"}  },  
                                       
                                       { {"100","101"},
                                         {"110","111"}  },  
                                       
                                       { {"200","201"},    
                                         {"210","211"}  },
                                       
                                       { {"300","301"},
                                         {"310","311"}  } } ;


        //Print a value
     
        
        display(greetings);
       
        
    }

    public static void display(String x[][][])
    {
        for(int row = 0; row < x.length; row++)
        {
            for(int column = 0; column < x[row].length; column++)
            {
                System.out.print(x[row][column][0] + "\t\t\t\t");
            }
            System.out.println(); //Go to next row.
        }
    }
}
