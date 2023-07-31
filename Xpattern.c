// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
   char str[20];
   gets(str);
   int start=0,end=12;
   while(start<=end){
       for(int j=0;j<start;j++){
           printf(" ");
       }
       if(start!=end){
       printf("%c",str[start]);}
      int diff=end-start-1;
      for(int i=0;i<diff;i++){
          printf(" ");
      }
      if(start!=end){
       printf("%c",str[end]);}
       if(start==end){
           printf("%c",str[start]);
       }
       start++;
       end--;
       printf("\n");
   }
 int mid=12/2;
 start=mid-1;
 end=mid+1;
  while(start>=0 && end<=12){
       for(int j=0;j<start;j++){
           printf(" ");
       }
       if(start!=end){
       printf("%c",str[start]);}
      int diff=end-start-1;
      for(int i=0;i<diff;i++){
          printf(" ");
      }
      if(start!=end){
       printf("%c",str[end]);}
       if(start==end){
           printf("%c",str[start]);
       }
       start--;
       end++;
       printf("\n");
   }

    return 0;
}
