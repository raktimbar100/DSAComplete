import java.util.*;
public class Tsk {
    public static void main(String[] args) {
        int[] arr={5,-9,10,8,78,89,-776}; //1 2 3 4 5
        char[] b=pri(arr);
        for(int i=0;i<b.length;i++)
        {
            System.out.print(b[i]);
        }
    }
    static char[] pri(int[] arr)
    {
        int[] b=new int[arr.length];
        char[] ch=new char[arr.length];
        for(int i=0;i<arr.length;i++){
            b[i]=arr[i];
        }

        Arrays.sort(b);//-9 7 12 67 89
        for(int j=0;j<arr.length;j++){
            int lb=65;
            for(int k=0;k<b.length;k++){
                if(arr[j]!=b[k]){
                    lb++;
                }
                else{
                    ch[j]=(char)lb;

                }
            }
        }
        return ch;
    }
}
