import java.util.Arrays;
import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
     String s="Engineering";
     s=s.toLowerCase();
     char[] ch=s.toCharArray();
    int start=0;
    int end=ch.length-1;
 for(int i=start;i<=end;i++)
 {
     for(int j=i+1;j<=end;j++)
     {
         if((int)(ch[i])==(int)(ch[j]))
         {
             ch[j]='0';
         }
     }
 }
 String str="";
   for(char i:ch)
     {
    
         if(i=='0')
         {
             continue;
         }
         str=str+i;
     }
    System.out.println(str.toLowerCase());
    
    }
}
