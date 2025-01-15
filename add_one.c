#include <stdio.h>

void add_one(int *a) {
    a += 1;
    printf("From add_one, num1 as pointer: %p\n", a);
    printf("From add_one, num1 as integer: %d\n", a);

    return;
}

int main() {
    int num1 = 5;
    printf("num1 Address: %p\n", &num1);
    add_one(&num1);
    printf("num1 Address: %p\n", &num1);
    printf("num1: %d\n", num1);
    return 0;
}
