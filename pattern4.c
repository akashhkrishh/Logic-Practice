#include <stdio.h>

int main()
{
    int n=6;
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
        printf("%c",64+j);}
        for(int h=64+(i-1);h>64;h--){
            printf("%c",h);
        }
        printf("\n");
    }

    return 0;
}
