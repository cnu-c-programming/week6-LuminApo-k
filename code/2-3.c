#include <stdio.h>

void print_2d_arr(int *element, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(element + i * col + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1,2,3,4,5,6};

    print_2d_arr(&arr[0][0], 2, 3);

    return 0;
}
