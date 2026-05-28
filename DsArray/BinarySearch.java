package DsArray;

public class BinarySearch{
    public static void main(String[] args ){
        int[] num ={1,2,3,4,5,6,7,8,9};
        int target = 8;

        int start = 0;
        int end = num.length -1;
        while (start <= end){
            int mid = start - (start - end) / 2;
            if (num[mid] == target){
                System.out.println(mid);
                break;
            }
            if (num[mid] < target) {
                start = mid;
            }else {
                end = mid;
            }
        }
    }
}