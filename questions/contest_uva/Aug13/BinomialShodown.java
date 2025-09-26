import java.math.*;
import java.util.Scanner;

public class BinomialShodown {
    public BigInteger memo[] = new BigInteger[100001];
    memo[0] = BigInteger.ONE;

    public BigInteger fat(int n){
        if (memo[n].equals(BigInteger.ZERO)){
            return memo[n];
        }
        if (n <= 1){
            return BigInteger.ONE;
        }

        memo[n].add(BigInteger.valueOf(n).multiply(fat(n-1)));
        return memo[n];
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n, k;

        while (sc.hasNextLine()){
            n = sc.nextInt();
            k = sc.nextInt();

        }
    }
}