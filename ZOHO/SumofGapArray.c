#include<stdio.h>
int main()
{
    int n,k;
    int a[100];
    int sum =0;
    scanf("%d %d",&n,&k);
    for (int i = 0; i < n; i++){
      scanf("%d",&a[i]);
    }
    
    for(int i=0;i<k;i++){
    int sum=0;
        for(int j=i;j<n;j=j+k){
            sum+=a[j];
        }
    printf("%d ",sum);
    }
    return 0;
}
/*    13 4
      1 2 3 4 5 6 7 8 9 10 11 12 13    */
