#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void rev(int *arr,int s,int e){
    int i=s,j=e-1;
    while(i<j){
       swap(&arr[i++],&arr[j--]);
    }
    
}

int main()
{
    // 5671234
    int arr[] = {1,2,3,4,5,6,7};
    int k =2;
    int n=7;
    rev(arr,0,n-k) ;
    rev(arr,n-k,n);
    rev(arr,0,n);
   
   
   for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    
    
    return 0;
}