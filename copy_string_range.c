#include <stdio.h>
#include <string.h>
int main() {
    char str[100]="Hello World Nice";
    char cstr[100];
    int m,n,j=0;
    scanf("%d %d",&m,&n);
    for(int i=m-1;i<n;i++){
        cstr[j++]=str[i];
    }
    cstr[j]='\0';
    puts(cstr);
    return 0;
}
