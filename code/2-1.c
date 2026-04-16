#include <stdio.h>

void print_arr(int *p, int size) {
    printf("%lu\n", sizeof(p));
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%lu\n", sizeof(arr));
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    print_arr(arr, 5);

    return 0;
}
