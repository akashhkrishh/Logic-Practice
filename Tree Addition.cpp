#include<iostream>
using namespace std;

int main()
{
    int arr[5][5] = { {9,0,0,0,0}, 
                      {9,8,0,0,0},
                      {9,8,7,0,0},
                      {9,8,7,6,0},
                      {9,8,7,6,5}};
    int sum = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}