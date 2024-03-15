#include <stdio.h>
int mx(int a[],int n,int m)
{
    int i;
    int m2=a[0];
    for(i=1;i<n;i++)
        if(m>a[i] && m2<a[i])
        m2 = a[i];
    return m2;
}
int main(){
    int n,i,m;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    m=a[0];
    for(i=1; i<n;i++)
    {
        if(m<a[i])
            m = a[i];
    }
    printf("%d\n",mx(a,n,m));
    return 0;
}


