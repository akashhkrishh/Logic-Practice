
#include <stdio.h>
/*
Test Case 2:
Enter the number: 5
Output array: 2 7 3 11 5
*/
int isPrime(int n){
    int count=0;
    if(n==1){
        return 0;
    }
    for(int j=2;j<=n/2;j++){
        if(n%j==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int a[100];
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int count=0,j=0;
    int r=(n%2==0)?(n/2):(n/2)+1;
    for(int i=2;count!=n;i++){
            if(isPrime(i)){
                    a[count++]=i;
                }
            }
    printf("Output array: ");       
    for(int i=0;i<n;i++){
        if(i%2==0){
            printf("%d ",a[j++]);
        }else{
            printf("%d ",a[r++]);
        }
        
    }

    return 0;
}
