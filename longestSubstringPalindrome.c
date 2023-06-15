#include <stdio.h>
#include <string.h>


int isPaline(char *c,int s,int e){
    int len = e;
    for (int i=s,j=len; i<len/2,j>=len/2;i++,j--){
        if(c[i]!=c[j]){
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100],sstr[100];
    int l=0,start=-1,end=-1;
    gets(str);
    
    for(int i=0;i<strlen(str);i++){
        for ( int j = strlen(str)-1; j > i; j--){
           if(str[j]==str[i]){
                if(isPaline(str,i,j)){
                    start=i; end=j;
                    break;
                }
           }
        }
        if(start>=0 && end>=0){
            break;
        }
    }
    for (int i = start; i <= end; i++)
    {
       printf("%c",str[i]);
    }
    
    return 0;
}
