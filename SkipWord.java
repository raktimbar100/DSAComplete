import java.util.Arrays;
public class Day1 {
    public static void main(String[] args) {
        System.out.println(skip("bccapplead"));
    }
    static String skip(String input){
        if(input.isEmpty()){
            //System.out.println(ans);
            return "";


        }
            if(input.startsWith("apple")){
                return skip(input.substring(5));

            }else {
                return input.charAt(0)+skip(input.substring(1));
            }



    }

}
