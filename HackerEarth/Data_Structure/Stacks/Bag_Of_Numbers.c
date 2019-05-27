//Problems : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/bag-of-numbers/

#include<stdio.h>
#include<stdlib.h>

int top=-1;

void push(int *s, int n, int x)
{   if (top == n-1)    exit(1);
    else    s[++top] = x;
}

int pop (int *s, int n)
{   if (top == -1)   exit(1);
    else    return(s[top--]);
}

int main()
{   int a[5], s[5];
    int N=6;
    scanf("%d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    for (int i=N; i>0; i--)
    	push (s, N, a[i-1]);
    for (int i=0; i<N; i++)
		printf("%d ", pop (s, N));
	//printf("\n");
}
