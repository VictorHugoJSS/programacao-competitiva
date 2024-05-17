// Uva Online Judge
// Question: 623 - 500!
// Student: Victor Hugo Jose Sales da Silva

import java.util.Scanner;
import java.math.BigInteger;

public class C623{
  public static void main ( String args[] ){
    Scanner scan = new Scanner(System.in);
    int number;
    BigInteger fat;
    while (scan.hasNext()){
      number = scan.nextInt();
      fat = BigInteger.ONE;

      for (int i = 2; i <= number; ++i){
        fat = fat.multiply(BigInteger.valueOf(i));
      }
      System.out.println(number + "!");
      System.out.println(fat);
    }
    scan.close();
  } 
}