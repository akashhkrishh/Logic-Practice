#include <stdio.h>
void Print(int a[],int n){
    for(int i=0;i<n;i++){
    if(a[i]!=a[i+1])
        printf("%d ",a[i]);
    }
}
int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(int j=0;j<i+1;j++){
            if(a[i]<a[j]){
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("\n");
    Print(a,n);
    return 0;
}
