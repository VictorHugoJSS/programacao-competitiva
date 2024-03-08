import java.util.*;
import java.math.*;

public class Main{
    static BigInteger fib(int n){
        BigInteger[] fibo = new BigInteger[10000000];
        fibo[0] = BigInteger.valueOf(0);
        fibo[1] = BigInteger.valueOf(1);
        
        for (int i = 2; i <= n; i++){
            BigInteger a = fibo[i-1], b = fibo[i-2];
            fibo[i] = a.add(b);
        }
        
        return fibo[n];
    }
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()){
            int number = sc.nextInt();
            BigInteger Value = fib(number);
            System.out.println(Value);
        }
        sc.close();
    }
}