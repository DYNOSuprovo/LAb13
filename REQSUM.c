#include <stdio.h>
int sum(int a)
{
    int s=0;
    if(a<0)
    {
        s=s+a;
    }
    else
        sum(a-1);
    
}
