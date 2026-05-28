public class AllArmstrongNumber {
    public static void main(String[] args) {
        for (int i= 100; i <1000; i++) {
     int sum = 0;
        int a = i;
        while (a > 0) {
            int rem = a  % 10;
            sum += Math.pow(rem,3);
            a = a/ 10;
            }
            if (sum == i) {
                System.out.println(i);
            }
        }
    }
}