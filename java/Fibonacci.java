public class Fibonacci {
    public static void main(String[] args){
        int a = 0;
        int b = 1;

        
        for (int i = 0; i < 10; i++) {
            int temp = a+b;
            System.out.println(temp);
            a=b;
            b=temp;
        }
    }
}
