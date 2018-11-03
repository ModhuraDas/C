#include<stdio.h>
#include<math.h>

void main()
{
	int m,a,b,l,n,i;
	long long int x; 
	m=a=b=l=n=0;
	i=1;
	printf("Enter (max 10 digits): ");
	scanf ("%lld", &x);
	printf("%lld", x);
	
	do
	{	m = x%10;	
		x = x/10;	
		if (m == 1)
			a=i;	
			do
			{	n = x%10;	
				if(n==1)
				{	
					b=i;	
					if(l<(b-a)){l=b-a;}}
			}while(n=0);
		i++;
	}while(x>0);
	printf("\nl = ");
	printf("%d\n\n", l);
}
