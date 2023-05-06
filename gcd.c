#include <stdio.h>
#include <string.h>
int gcd(int a,int b){
    int max=0;
    for(int i=1;i<=a;i++){
        if(b%i==0 && a%i==0){
            max=i;
        }
    }
    return max;
}

int main() {
    int a=1012,b=7;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("%d",gcd(a,b));
    return 0;
}
