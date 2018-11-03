#include<stdio.h>

void main()
{
	int i,j,m;
	static int x=12;
	for(i=1; i<=7; i++)
	{	for(j=1;j<=i;j++)
		{	printf("%d ",j);}
		m=x;
		while(m>=1)
		{	printf(". ");
			m--;}
		for(j=i;j>=1;j--)
		{	printf("%d ",j);}
		x=x-2;
		printf("\n");}}

