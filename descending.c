#include<stdio.h>

void main ()
{	int i,j,x;
	for(i=7; i>=1; i--)
	{	for(x=i*2; x>=3; x--)
		{	printf(" ");}
		for(j=i;j<=7;j++)
		{	printf("%d ", j);}
		printf("\n");}}
