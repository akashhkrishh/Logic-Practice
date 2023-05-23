#include <stdio.h>

int main() {
    int N,C;
    scanf("%d %d",&N,&C);
    int snum=1;
    for(int i=1;i<=N;i++){
        int diff=((i-C)+N)%N;
        int num=snum+diff;
        printf("%d ",num);
    }
    return 0;
}
