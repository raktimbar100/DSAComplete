// Online Java Compiler
// Use this editor to write, compile and run your Java code online
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
        for(int i=n-1;i>=0;i--)
        {
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
            heapify(arr,i,0);
        }
        System.out.println(Arrays.toString(arr));
        //7,5,6,4,2,1,3
        //3,5,6,4,2,1,7
        
        
        /*
        
        7
    5       6
4      2  1     3

        


        
        
        
        
        
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
