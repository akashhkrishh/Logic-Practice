#include<iostream>
using namespace std;

int main()
{
    int a =10,b=5;
    a^=b^=a^=b;
    cout << a<<" " << b<< endl;
    a = (b=((a^=b)^b))^a;
    cout << a<<" " << b<< endl;
    a = -((b=(a+=b)-b)-a);
    cout << a<<" " << b<< endl;
    return 0;
}