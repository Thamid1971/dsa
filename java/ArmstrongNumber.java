public class  ArmstrongNumber {
    public static void main(String[] args) {
        int n= 407;
        System.out.println(IsArmstrongNumber(n));
    }

    static boolean IsArmstrongNumber(int n){
        int sum = 0;
        int a = n;
        while (a > 0) {
            int rem = a  % 10;
            sum += Math.pow(rem,3);
            a = a/ 10;
        }
        return sum == n;
    }
}
