#include <stdio.h>
void Print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main() {
    int n;
    int num,i,j=1,k=0;
    scanf("%d",&n);
    scanf("%d",&num);
    int a[n];
    num--;
    i=num;
    while(i<n){
        a[i++]=j++;
    }
    while(k<num){
        a[k++]=j++;
    }
    Print(a,n);
    return 0;
}
