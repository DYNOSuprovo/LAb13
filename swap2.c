#include <stdio.h>
int swap(int a[],int n)
{   
    int max=a[0],min=a[0],i;
    for (i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        } else if (min > a[i]) {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i] == max) {
            a[i] = min;
        } else if (a[i] == min) {
            a[i] = max;
        }
    }
    return a;
}        
int  main() {
    int n,i;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf( "%d", &arr[i]);
    }
    swap(arr,n);
    printf("\nThe modified array is : \n");
    for(i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
