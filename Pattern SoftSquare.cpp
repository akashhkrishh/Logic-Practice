#include<iostream>
using namespace std;

/*

* * * * *
*       *
*       *
*       *
* * * * *

*/

int main()
{
    
    int N = 6;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if (i== 1 || j==1 || i==N || j==N)
                cout << "* " ;
            else
                cout << "  " ;
        }
        cout << endl;
    }
    
    return 0;
}