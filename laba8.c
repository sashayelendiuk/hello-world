#include <stdio.h>
 
unsigned long long int fact(int n) {
    if (n < 2) return 1;
    return n * fact(n - 1);
}
 
int main() {
    int n = 5;
    printf("%lli", fact(n));
    return 0;
}
