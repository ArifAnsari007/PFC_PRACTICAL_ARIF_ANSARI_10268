#include <stdio.h>

int main() {
    int arr[3][3] = {
        {5, 12, 7},
        {9, 3, 15},
        {8, 6, 4}
    };

    int min = arr[0][0], max = arr[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] < min) min = arr[i][j];
            if(arr[i][j] > max) max = arr[i][j];
        }
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}

// Minimum element: 3
// Maximum element: 15