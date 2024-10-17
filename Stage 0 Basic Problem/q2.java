// Checking for Prime Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to determine if a number is prime.
// Example:
// Input: number = 7
// Output: Prime
// Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.


// ** Explanation:--   Prime no. ke two factor hote hai 1 and wo khud, tho 1 or jis no. ko check karenge mtlb khud unhe chod ke sabko compare karenge.


import java.util.*;

public class q2 {

    static boolean isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i < n; i++) {
            if (n%i == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(isPrime(n));;
        if(isPrime(n)){
            System.out.println("Prime");
        }
        else{ 
            System.out.println("Not prime");
        }
        
        
    }
    
}
