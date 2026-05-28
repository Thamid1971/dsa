public class IsPrime {
    public static void main(String[] args){
        int n = 5;
        boolean IsPrime = true;
        for (int i = 2; i <= Math.sqrt(n) ; i++) {
            if (n % i == 0) {
                IsPrime = false;
                break;  
            }
        }
        System.out.println(IsPrime);
    }
}
