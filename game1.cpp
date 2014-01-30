 #include<stdio.h>
    int gcd(long int,long int);
    int main()
    {
    int i,t,n,j;
    // printf("ENter");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    long int a[n];
    for(j=0;j<n;j++)
    {
    scanf("%ld",&a[j]);
    }
    int p=gcd(a[0],a[1]);
    for(j=2;j<n;j++)
    {
    p=gcd(p,a[j]);
    if(p==1)
    break;
    }
    printf("%d\n",p);
    }
    return 0;
    }
    int gcd(long int a,long int b)
    {
    int c = a % b;
    while(c != 0)
    {
    a = b;
    b = c;
    c = a % b;
    }
    return b;
    }  
