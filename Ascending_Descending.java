import java.util.Arrays;
class HelloWorld {
    public static void main(String[] args) {
       int arr[] = {1, 2, 3, 4, 5, 6};
       Arrays.sort(arr);
       int start=arr.length/2;
       int end=arr.length-1;
       while(start<end)
       {
           int temp=arr[start];
           arr[start]=arr[end];
           arr[end]=temp;
           start++;
           end--;
       }
       System.out.println(Arrays.toString(arr));
    }
}
