#include <stdio.h>
#include <math.h>

void isPrime(int prime){
    int flag = 0;
    for(int i=2;i<=sqrt(prime) && flag==0;flag=(prime%(i++)==0)?1:0);
    if(!flag)
        printf("%d ",prime);
}

int main()
{
    
    for(int i=2;i<=100;i++){
        if(i>1)
            isPrime(i);
    }
    return 0;
}
