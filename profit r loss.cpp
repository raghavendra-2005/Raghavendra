#include<stdio.h>
int main()
{
	int cp,sp;
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		printf("profit");
	}
	   else if(cp<sp)
	   printf("loss");
	   else(cp=sp)
	   printf("no profit no loss");
}
