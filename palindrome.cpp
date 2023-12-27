#include<stdio.h>

int main()

{

	int i,n,r,rev,t, a, b;

	scanf("%d%d", &a, &b);

	for(n = a; n <= b; n++)

	{

    	t=n;

    	rev = 0;

    	while(t>0)

    	{

    		r=t%10;

    		rev=rev*10+r;

    		t=t/10;

    	}

    	if(rev==n)

    	printf("%d ", n);

	}

}
