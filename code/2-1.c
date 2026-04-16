#include <stdio.h>

void print_arr(int *p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main() {
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    print_arr(arr, 5);

    return 0;
}
