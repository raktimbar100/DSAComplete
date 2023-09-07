
/*Question:
You’re given a string where multiple characters are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

Input :
aabbbbeeeeffggg

Output:
a2b4e4f2g3

Input :
abbccccc

Output:
ab2c5

*/
import java.util.ArrayList;
public class SAP1 {
    public static void main(String[] args) {
        doIt("abc");
        //System.out.println(ans);
    }
    static void doIt(String val){
        String mod="";
        ArrayList<Integer> al=new ArrayList<>();
        int[] arr=new int[150];
        char[] ch=val.toCharArray();
        for (int i = 0; i < ch.length; i++) {
            int n=(int)ch[i];
            if(al.contains(n)==false){
                al.add(n);
            }

            ++arr[n];
        }
        int[] res=new int[al.size()];
//        for(int i:al){
//            System.out.println(al);
//        }

        for(int i=0;i<res.length;i++){
            res[i]=arr[al.get(i)];
        }

        for(int j=0;j< res.length;j++){

            //System.out.print(res[j]);
            //String c=Integer.toString(al.get(j));
            char rt=ch1(al.get(j));
            if(res[j]!=1) {
                String k = Integer.toString(res[j]);

                mod = mod + rt + k;
            }else{
                mod=mod+rt;
            }

        }

        System.out.println(mod);


    }
    static char ch1(int val){
        char c=(char)val;
        return c;
    }
}
