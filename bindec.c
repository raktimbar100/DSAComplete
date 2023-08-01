#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
   
//1*1 + 1*2+0*4+1*8=1+2+8=11
char arr[4];
gets(arr);
//printf("%d",strlen(arr));
int n=strlen(arr)-1,count=0,pw=0;
for(int i=3;i>=0;i--){
    int l=arr[i]-'0';
    //printf("%d",l);
   count+=l*pow(2,pw);
    //printf("%d\n",count);
    //printf("%c\n",arr[3]);
    pw++;
}

printf("%d",count);

    return 0;
}
