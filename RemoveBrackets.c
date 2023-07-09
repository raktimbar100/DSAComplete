//Removing brackets from an algebraic expression.
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[]="abc(gds)(";
	char ch1[20];
	int i=0;
	int j=0;
	while(ch[i]!='\0')
	{
		if(ch[i]!='('&&ch[i]!=')')
		{
			ch1[j++]=ch[i];
			
		}
		i++;
		
		
	}
	ch1[j]='\0';
	printf("%s",ch1);
	
	
	return 0;
}
