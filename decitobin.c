//decimal to binary
#include <stdio.h>
int bin(int n)  
{  
    if (n == 0) return 0;    
    else return ((n % 2) + 10 * bin(n / 2));    
}    
void main()    
{      
    int n;
    scanf("%d",&n);
    printf("%d",bin(n));
}
