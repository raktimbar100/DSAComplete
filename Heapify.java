import java.util.Arrays;
class Heap {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7};
        int n=arr.length;
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(arr,n,i);
        }
        System.out.println(Arrays.toString(arr));
        /*
        1
    2           3
4       5  6        7

i=2

         1
    2           7
4       5  6          3

i=1
          1
     5          7
4       2   6       3

i=0

          7
     5         1
4        2  6      3

=>         7
     5          6
4        2  1       3

[7,5,6,4,2,1,3]


        7
    5         6
4      2   1      3
        
        
        
        */
    }
    static void heapify(int[] arr,int n,int i)
    {
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if (left<n && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<n&&arr[right]>arr[largest]){
            largest=right;
        }
        if(i!=largest){
            int temp=arr[i];
            arr[i]=arr[largest];
            arr[largest]=temp;
            heapify(arr,n,largest);
        }
        
    }
}
