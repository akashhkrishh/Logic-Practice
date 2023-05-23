
#include <stdio.h>
// 8
// 1 7 4 3 6 7 4 3   3 6 7
int main() {
    int a[100];
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0,max=0,index=0;
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            for(int j=i;j<n;j++){
                count++;
                if(a[j]>a[j+1]){
                    break;
                }
            }
            if(count>max){
                max=count;
                index=i;
            }
            count=0;
        }
    }
    printf("Output array: ");
    for(int i=index;i<index+max;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
