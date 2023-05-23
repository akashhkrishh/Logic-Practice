/*
Test Case 1:
Enter the array size: 7
Enter the array: 3 1 8 4 5 12 9
Sorted array: 1 3 4 8 5 12 9

*/
#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(int i=1;i<n;i=i+2){
        if(a[i]<a[i-1]){
            int s=a[i];
            a[i]=a[i-1];
            a[i-1]=s;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
