#include <stdio.h>
int main() {
  int i,j,k,n,c=0,p,e;
  printf("Enter x");
  scanf("%d",&n);
  int a[n],b[n];
  for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
  }
for (i=0;i<n-1;i++) {
    for (j=0;j<n-i-1;j++) {
        if (a[j]>a[j+1]) {
            int temp=a[j];
            a[j] = a[j+1];
            a[j+1] =temp;
            }
        }
    }
for (i=1;i<n;i++) 
{       
        if((a[i-1]!=a[i]) && (a[i]!=a[i+1]))
            printf("%d",a[i]);
    }
}
