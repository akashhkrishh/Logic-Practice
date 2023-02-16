#include <stdio.h>
int count(int n,int a[],int N){
    int c=0;
    for(int i=0;i<N;i++){
     if(n==a[i])
        c++;
    }
    return c;
}
void Print(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
    if(a[i]!=a[i+1]){
        printf("%d --> %d\n",a[i],count(a[i],a,n));
        
    }
}}
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
