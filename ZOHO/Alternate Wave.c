
#include <stdio.h>
/*
Test Case 1:
Enter the number: 10
Output array: 1 6 2 7 3 8 4 9 5
*/
int main() {
    int a[100];
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int v=1;
    int r=(n%2==0)?(n/2)+1:(n/2)+2;
    for(int i=0;i<n;i++){
        ((i%2==0)?(a[i]=v++):(a[i]=r++));
    }
    printf("Output array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
