
#include <stdio.h>
/*
Enter the array size: 7
Enter the array: 3 1 8 4 5 12 9
Sorted array: 3 1 5 4 8 12 9
*/
void swap(int *a,int *b){
    int s = *a;
    *a =*b;
    *b = s;
}
int main() {
    int a[100];
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=i;j<n;j=j+2){
                if(a[i]>a[j]){
                    swap(&a[i],&a[j]);
                }
            }
        }
        else{
            for(int j=i;j<n;j=j+2){
                if(a[i]>a[j]){
                    swap(&a[i],&a[j]);
                }
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
