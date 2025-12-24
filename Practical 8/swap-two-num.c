#include <stdio.h>
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapNumbers(&x, &y);  

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
// output
// x=10 
// y=20
// Before swap: x = 10, y = 20
// After swap: x = 20, y = 10