public class largestNumber {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Please provide numbers as arguments.");
            return;
        }

        int largest = Integer.parseInt(args[0]);

        for (int i = 1; i < args.length; i++) {
            
            int a = Integer.parseInt(args[i]);

            largest = Math.max(largest, a);
        }

        System.out.println("Largest number: " + largest);
    }
}