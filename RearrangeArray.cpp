#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,1,-2,-5,2,-4};
    int n= sizeof(arr)/sizeof(int);
    int res[n];
    int k=0,j=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            res[k]=arr[i];
            k+=2;
        }else{
            res[j]=arr[i];
            j+=2;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}