#include <stdio.h>

int main() {
    int N,C;
    scanf("%d %d",&N,&C);
    for(int i=(N-C)+2;i<=N;i++){
        printf("%d ",i);
    }
    for(int i=1;i<=(N-C)+1;i++){
        printf("%d ",i);
    }
    return 0;
}
