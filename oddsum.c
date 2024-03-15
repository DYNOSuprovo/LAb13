#include <stdio.h>
int oddsum(int a[],int n) 
{
    int i, sum = 0; 
    for (i=0; i<n; i++)
        {
            if(a[i]%2==1)
            sum += a[i];
        }  
    return sum;  
}   
int  main() {
    int n,i;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf( "%d", &arr[i]);
    }
    printf("%d",oddsum(arr,n));
}
