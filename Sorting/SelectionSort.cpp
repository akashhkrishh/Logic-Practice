#include<iostream>
using namespace std;

int main()
{   
int i=5;

    int a[]={3,5,7,8,2};
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    
    }
    for(int i=0;i<5;i++){
        cout << a[i] <<" ";
    
    }
    
    
    return 0;
}