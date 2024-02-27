#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = { {1,0,0}, 
                      {0,1,0}, 
                      {0,0,1} };
    int flag = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((i==j && arr[i][j]!=1)  
            ||(i!=j && arr[i][j]!=0)){
                flag = 0;
                break;
            }
        }
    }
    cout << flag << endl;
    return 0;
}