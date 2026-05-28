import java.util.Scanner;

public class SumNumbers{
    public static void main(String[] args){
        Scanner input1 = new Scanner(System.in);
        Scanner input2 = new Scanner(System.in);
        int num1 = input1.nextInt();
        int num2 = input2.nextInt();
        System.out.println((num1 + num2));
        input1.close();
        input2.close();
    }
}