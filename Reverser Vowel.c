#include <stdio.h>
#include <string.h>

int isVowel(char c){
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
        return 1;
    }
    return 0;
}

int main() {
    char str[100],sstr[100];
    int l=0;
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(isVowel(str[i])){
            sstr[l++]=str[i];
        }
    }
    sstr[l]='\0';
    l=0;
    for(int i=strlen(str);i>=0;i--){
        if(isVowel(str[i])){
            str[i]=sstr[l++];
        }
    }
    puts(str);
    return 0;
}
