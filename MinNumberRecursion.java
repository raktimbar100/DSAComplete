
class MinNumber {
    public static void main(String[] args) {
       int[] arr={1,2,3,4,5};
       se(arr,Integer.MAX_VALUE,0);
    }
    static void se(int[] arr,int min,int i)
    {
        if(i==arr.length-1)
        {
            System.out.print(min);
            return;
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
        se(arr,min,i+1);
        
    }
}
