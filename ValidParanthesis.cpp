#include<iostream>
using namespace std;

int main()
{
    string in ;
    cin>>in;
    int p = 0;
    char arr[in.length()];
    for (int i=0;i<in.length();i++){
        char c = in[i];
        if(c == '{' || c == '(' || c== '['){
            arr[p++] = c;
        }
        else if(c == '}' || c == ')' || c== ']'){
            if(arr[p-1] == '{' && c == '}'){
                arr[(p--)-1] = ' ';
            }
            else if(arr[p-1] == '[' && c == ']'){
                arr[(p--)-1] = ' ';
            }
            else if(arr[p-1] == '(' && c == ')'){
                arr[(p--)-1] = ' ';
            } else {
                arr[p++] = c;
            }
        }else{
            break;
        }
    }
    cout <<((p==0)?"Valid":"Not Valid")<< endl;
    
    return 0;
}