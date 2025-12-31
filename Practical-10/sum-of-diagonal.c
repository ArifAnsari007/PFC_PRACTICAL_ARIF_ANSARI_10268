#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int primary_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];
        secondary_sum += arr[i][n - 1 - i];
    }
    printf("%d\n", primary_sum);
    printf("%d\n", secondary_sum);
    int total_sum = primary_sum + secondary_sum;
    if (n % 2 == 1) {
        total_sum -= arr[n/2][n/2];
    }
    printf("%d\n", total_sum);
    return 0;
}