#include <stdio.h>
#include "divide.c"

int main() {
    int a = 8;
    divide(&a);
    printf("%d\n", a);
    return 0;
}
