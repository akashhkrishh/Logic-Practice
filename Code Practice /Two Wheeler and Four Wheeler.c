
#include <stdio.h>
int main() {
    int v=200;
    int w=540;
    if(2<=w && w%2==0 && v<w){
        for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++){
                if((i+j)==v && ((i*2)+(j*4))==w){
                    printf("TW =%d FW =%d",i,j);
                    break;
                }
            }
        }
    }
    return 0;
}
