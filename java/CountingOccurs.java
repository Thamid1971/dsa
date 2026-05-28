public class CountingOccurs {
    public static void main(String[] args){

        int[] digits = String.valueOf(35683903).chars().map(c -> c - '0').toArray();
        int count = 0;
        int tar = 3;
        for (int i = 0; i < digits.length; i++) {
            if (tar == digits[i]) {
                count++;
            }
            
        }
        System.out.println(count);
    }
}
