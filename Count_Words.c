
#include <stdio.h>
int main() {
    char str[100]=" Hello World Nice  ";
    int count=1;
    if(str[0]==' '){
            count--;
        }
    for(int i=0;str[i]!='\0';i++){
        if(str[i+1]!=' ' && str[i]==' ' && str[i+1]!='\0'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
