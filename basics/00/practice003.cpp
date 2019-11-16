#include <iostream>
using namespace std;
int main(){
    int a=8,b=3,c=9;
    a=a+++(a-b)*(c-b);
    cout <<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<"\n";
    system("pause");
    return 0;
}
