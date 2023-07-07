
public class Test {

static int len=0;
    public static void main(String[] args) {
         String s="In.form,at5654777655-=@@@io1n Tec???hnol-og=y";
         char[] ch=s.toCharArray();
        helper(ch,ch[0],len);

    }
    static int remove(char[] ch,char ch1)
    {
        for(int i=0;i<ch.length;i++)
        {
            if(ch[i]==' ')
            {
                continue;
            }
            if(((int)(ch[i])>=65&&(int)(ch[i])<=91) ||((int)(ch[i])>=97&&(int)(ch[i])<=122))
            {
                continue;
            }

            int start=i;
            len++;
            while(start<ch.length-1)
            {

                ch[start]=ch[start+1];
                start++;
            }

            remove(ch,ch[i+1]);

        }
       return len;
    }
    static void helper(char[] ch,char ch1,int len)
    {
        len=remove(ch,ch1);
        char[] c1=new char[ch.length-len];
        for( int i=0;i<c1.length;i++)
        {
            c1[i]=ch[i];
        }
        String answer=" ";
        boolean decide=true;
        int in=0;
        int end=c1.length-1;
        while(in<end)
        {
            if((int)(c1[in])==(int)(ch[end]))
            {
                continue;
            }
            decide=false;
            break;
        }
        for(char c2:c1)
        {
            answer=answer+c2;
        }
        answer=answer.toUpperCase();
        String s=answer;

        System.out.println(s);
        System.out.println(decide);
    }
}
