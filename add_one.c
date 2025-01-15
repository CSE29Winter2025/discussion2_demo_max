#include <stdio.h>

void add_one(int a) {
    a += 1;
    return;
}

int main() {
    int num1 = 5;
    add_one(num1);
    printf("num1: %d\n", num1);
    return 0;
}
