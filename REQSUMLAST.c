#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        printf("%d ",n);
        return 0;
    } else {
        printf("%d ",n);
        return n%10 + sum(n/10);
    }
}
int main() {
    int result = sum(112);
    printf("%d\n", result);
    return 0;
}
