#include<stdio.h>
#include<stdlib.h>
int main()
{	int i=0,j=0,l,k,c;
	char s,a[20];
	printf("Enter length of the string : ");
	scanf("%d", &l);
	if(l%2==0)
		c=(l/2)-1;
	else
		c=(l/2);
	printf("\nEnter string : ");
//input
	for(k=i; k<=l; k++)
	{	scanf("%c", &a[k]);}
//1st half
	while(i<=c)
	{	printf("\n");
		for(j=0; j<i; j++)
			printf(" ");
		printf("%c",a[i]);
		for(k=(c-i);k>0;k--)
			printf(" ");			
		printf("%c",a[i]);
		for(k=(c-i);k>0;k--)
			printf(" ");			
		printf("%c",a[i]);
		++i;}
//full word	
	for(k=0; k<=l; k++)
	{	printf("%c",a[k]);}
	printf("\n");
//2nd half
	for(i=c+2; i<=l; i++)
	{	for(k=j;k>0;k--)
			printf(" ");
		printf("%c",a[i]);
		for(k=2;k<(i-c);k++)
			printf(" ");			
		printf("%c",a[i]);
		for(k=2;k<(i-c);k++)
			printf(" ");			
		printf("%c",a[i]);
		printf("\n");		
		--j;}
	
	return 0;}


/*OUTPUT :
Enter length of the string : 11

Enter string : Programming


     
     

 P    P    P
  r   r   r
   o  o  o
    g g g
     rrr
Programming
     mmm
    m m m
   i  i  i
  n   n   n
 g    g    g


Enter length of the string : 8

Enter string : Programs


   
   

 P  P  P
  r r r
   ooo
Programs
   rrr
  a a a
 m  m  m
s   s   s
*/
