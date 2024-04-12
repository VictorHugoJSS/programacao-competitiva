import java.math.BigDecimal;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        BigDecimal num1, num2;
        String number;
        int a, b, t;
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()){
            t = sc.nextInt();
            a = sc.nextInt();
            b = sc.nextInt();

            num1 = BigDecimal.valueOf(t);
            num1 = num1.pow(a);
            num1 = num1.subtract(BigDecimal.ONE);
            num2 = BigDecimal.valueOf(t);
            num2 = num2.pow(b);
            num2 = num2.subtract(BigDecimal.ONE);
            number = num1.divide(num2).toString();

            if (number.length() > 100){
                System.out.println("is not an integer with less than 100 digits.");
            }
            else{
                System.out.println("("+ t + "^" + a + "-1" + ")" + "/" + "(" + t + "^" + b + "-1" + ")" + " " + number);
            }
        }
        sc.close();
    }
}
