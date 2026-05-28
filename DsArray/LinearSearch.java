package DsArray;

public class LinearSearch {
    static void main(String[] args){
        int[] num= {12,35,46,75,896,757,5,7,6,9,5,7,7877,587,9587,6983058,323,785,69};
        int target = 69;
        System.out.println(Search(num,target));
    }

    static int Search(int[] arr,int target){
        if(arr.length == 0){
            return -1;
        }
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
             return i;
            }
        }
        return -1;
    }
}

