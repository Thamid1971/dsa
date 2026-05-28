import java.util.Scanner;

public class Loops {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();

        // Countdown from n-1 down to 0
        for (int i = 1; i <= n; i++) {
            System.out.print(n - i);
        }

        input.close();

        // Array iteration using enhanced for loop
        int num[] = {1, 2, 3, 4, 5};
        for (int x : num) {
            System.out.println(x);
 
        }

        int p = 5;

        while (1 < p) {
           p--;
           System.out.println(p); 
        }

        int q = 5;

        do {
            System.out.println("Hello");
            q--;
        } while (q > 0);
    }
}