#include <stdio.h>

int leucas(int n) {
    if (n == 0) {
        return 2;
    } else if (n == 1) {
        return 1;
    } else {
        return 2 * leucas(n - 1) - leucas(n - 2);
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms in Leucas series: ");
    scanf("%d", &n);

    printf("Leucas series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", leucas(i));
    }

    return 0;
}
