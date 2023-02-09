#include<stdio.h>
void revsen(){
	char c;          
	scanf("%c",&c);   
	if(c!='\n'){ 
		revsen();    
		printf("%c",c);    
	}
}
int main(){
	printf("Enter a sentence:");
	revsen();
	return 0;
} 
