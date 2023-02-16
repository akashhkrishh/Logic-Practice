
#include <stdio.h>

int main()
{
    int n=6,p=1;
   // scanf("%d",&n);
   for(int k=1;k<=n;k++){
       for(int i=n;i>k;i--){
           printf(" ");
       }
       for(int j=1;j<=k;j++){
           if(p%2!=0){
            printf("%c ",64+p++);}
            else{
             printf("%c ",64+32+p++);
            }
            
    }
    printf("\n");
}
}
