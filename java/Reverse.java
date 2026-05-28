public class Reverse {
   public static void main(String[] args) {
       int num= 1234;
       int len = String.valueOf(num).length();
       String rnum = "";
       for (int i = 0; i <len; i++) {
        int last = num % 10;
        rnum = rnum + "" + last;
        num = num / 10;
       }
       System.out.println(Integer.parseInt(rnum));
   } 
   // my version
}
