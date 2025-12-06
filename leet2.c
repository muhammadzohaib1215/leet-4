#include <stdio.h>

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int t0 = 0, t1 = 1, t2 = 1;
    int t3;
    int i;

    for ( i = 3; i <= n; i++) {
        t3 = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = t3;
    }

    return t2;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Tribonacci T%d = %d\n", n, tribonacci(n));

    return 0;
}



