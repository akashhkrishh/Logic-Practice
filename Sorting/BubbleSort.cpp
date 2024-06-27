#include<iostream>
using namespace std;

int main()
{   
int i=5;

    int a[]={3,5,7,8,2};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    
    }
    for(int i=0;i<5;i++){
        cout << a[i] <<" ";
    
    }
    
    
    return 0;
}