import java.util.Arrays;
import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=2;
      System.out.println("Enter the range : ");
      int n1=sc.nextInt();
      int n2=sc.nextInt();
      int res1=primeRange(n1,n2,0);
      System.out.println("Enter the range : ");
       n1=sc.nextInt();
       n2=sc.nextInt();
      int res2=primeRange(n1,n2,0);
       System.out.println("\nOutput");
     System.out.println(res1);
      System.out.println(res2);
      //System.out.println(sum);
      
    }
    static int primeRange(int n1,int n2,int sum)
    {
         for(int i=n1;i<=n2;i++)
      {
          if(isPrime(i))
          {
              sum+=i;
          }
      }
      return sum;
    }
    static boolean isPrime(int n)
    {
        if(n<=1){
            return false;
        }
        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
