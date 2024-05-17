import java.math.*;
import java.util.Scanner;

public class C713{

    public static String reverse(String o){
        String t = "0";

        for (int i = 0; i < o.length(); i++){
            t += o.charAt(o.length()-1-i);
        }
        return t;
    }
    public static void main(String[] args){
        String num, n1String, n2String;
        int tc;
        BigInteger n1, n2;
        Scanner sc = new Scanner(System.in);

        tc = sc.nextInt();

        for (int i = 0; i < tc; i++){
            n1String = sc.next();
            n2String = sc.next();

            n1String = reverse(n1String);
            n2String = reverse(n2String);

            n1 = new BigInteger(n1String);
            n2 = new BigInteger(n2String);
            n2 = n2.add(n1);
            num = n2.toString(10);

            System.out.println(new BigInteger(reverse(num)));
        }
        sc.close();
    }
}