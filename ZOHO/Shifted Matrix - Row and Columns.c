#include <stdio.h>

void Matrix(int N, int C, int R) {
    int startNum = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int rowDiff = (i - R + N) % N; // 9 3
            int colDiff = (j - C + N) % N; //  10 4 

            int num = startNum + rowDiff * N + colDiff;
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main() {
    int N = 3;
    int C = 2;
    int R = 2;

    Matrix(N, C, R);

    return 0;
}
