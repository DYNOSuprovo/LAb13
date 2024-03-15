//a program to to recursively copy one array  into another
#include<stdio.h>
int copy(int a[], int b[], int n)
{
    if (n == 0) {
        return 1;
    } else {
        b[n - 1] = a[n - 1];
        return copy(a, b, n - 1);
    }
}
void main()
{
    int n,i;
    scanf( "%d", &n );
    int a[n],b[n];
    printf("Enter the elements of first array\n");
    for( i=0 ; i < n ; i++ )
        scanf("%d",&a[i]);
    copy(a,b,n);
    printf("\nSecond Array are\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}