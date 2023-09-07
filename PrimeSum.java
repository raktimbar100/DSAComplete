import java.util.Arrays;
public class Day1 {
    public static void main(String[] args) {
        int[] arr={10,20,30,40};
        System.out.println(method(arr));
    }
    static int method(int[] arr){
        Arrays.sort(arr);
        boolean flag=false;
        for(int i=0;i<arr.length;i++){
            if(isPrime(arr[i])){
                flag=true;
                break;
            }else{
                flag=false;
            }
        }

        if(flag){
            int sum=0;
            for(int i=0;i<arr.length;i++){
                if(isPrime(arr[i])){
                    sum+=arr[i];
                }
            }
            return checksmall(arr,sum);
        }else{
            int sum=0;
            for(int i=1;i< arr.length;i++){
                sum+=arr[i];
            }
            return sum;
        }

    }
    // 10 1 10 ->2,5
    static boolean isPrime(int val){
        for(int i=2;i<val;i++){
            if(val%i==0){
                return false;
            }
        }
        return true;
    }
    static int checksmall(int[] arr,int sum){
        for(int i=0;i<arr.length;i++){
            if(isPrime(arr[i])){
                sum=sum-arr[i];
                break;
            }
        }
        return sum;
    }
}
