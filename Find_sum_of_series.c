#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        double term = 1.0 / i;
        sum += term;
    }
    printf("%.2lf
", sum);
    return 0;
}