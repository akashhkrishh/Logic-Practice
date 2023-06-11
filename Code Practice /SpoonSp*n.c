/******************************************************************************

Print true if second string is a substring of first string, else print false. [ZOHO]
Note: * symbol can replace n number of characters
Input:
Spoon Sp*n Output : TRUE
Zoho *o*o Output : TRUE
Man n* Output : FALSE
Subline *line Output : TRUE

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char ns[100];
    scanf("%s %s",s,ns);
    int c=0;
    int k=0,co=0;
    for(int i=0;i<strlen(s);i++){
        if(c==i){
            co++;
        }
        if((ns[k]=='*' && s[i]!=ns[k] ) || s[i]==ns[k]){
            c++;
        }
        if(s[i]==ns[k]){
            k++;
          
        }
        
        if(ns[k]=='*' && s[i+1]==ns[k+1] ){
            k++;
         
        }
        
        
        
    }
    (strlen(s)==co)?printf("TRUE"):printf("FALSE");
    

    return 0;
}
