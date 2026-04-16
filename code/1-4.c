#include <stdio.h>

int main() {
    int arr3[2][3][4] = {0};

    int (*p)[3][4] = arr3;

    printf("%lu\n", sizeof(p));
    printf("%lu\n", sizeof(*p));
    printf("%lu\n", sizeof(**p));
    printf("%lu\n", sizeof(***p));

    printf("%p\n", (void*)p);
    printf("%p\n", (void*)*p);
    printf("%p\n", (void*)**p);

    return 0;
}
