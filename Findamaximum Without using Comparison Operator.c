#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int b = 5;
    int max = (a + b + abs(a - b)) / 2;
    printf("%d\n", max);
    return 0;
}
