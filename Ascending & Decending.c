#include <stdio.h>

void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void as(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    print(a,n);
}
void ds(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    print(a,n);
}

int main()
{
    int n=10;
    int a[]={10,4,5,2,3,8,9,1,6,7};
    as(a,n);
    printf("\n");
    ds(a,n);

    return 0;
}
