#Problem : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/

void main()
{   int n, i, *a, *b, *s;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (i=1;i<=n; i++)    a[i] = 0;
    b = (int *)malloc(n * sizeof(int));
    for (i=1;i<=n; i++)    b[i] = 0;
    s = (int *)malloc(n * sizeof(int));
    for (i=1;i<=n; i++)    s[i] = 0;
    for (i=1;i<=n; i++)    scanf("%d", a+i);
    for (i=1;i<=n; i++)    scanf("%d", b+i);
    for (i=1;i<=n; i++)    s[i] = a[i]+b[i];
    for (i=1;i<=n; i++)    printf("%d ", s[i]);
}
