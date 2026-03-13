import java.util.Scanner;

public class A340 {
    // Function to calculate GCD using Euclidean Algorithm
    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = 0;
            b = a % b;
            b = temp;
        }
        return a;
    }

    // Function to calculate LCM
    public static int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        // Calculating LCM of x and y
        int l = lcm(x,y);
        // Counting multiples from range [a, b]
        int count = (b / l) - ((a-1)/l);
        
        System.out.println(count);
        sc.close();
    }
}
