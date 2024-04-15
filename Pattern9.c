// Online C compiler to run C program online
/*
A 
b C 
d E f 
G h I j 
K l M n O


*/
#include <stdio.h>

int main() {
     int ch = 1;
     for(int i=1;i<=5;i++){
         for(int j=1;j<=i;j++){
             int val = (ch%2!=0)?(64+(ch++)):(96+(ch++));
             printf("%c ",val);
         }
         printf("\n");
     }

    return 0;
}
