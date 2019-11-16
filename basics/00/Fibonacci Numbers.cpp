#include<iostream>
using namespace std;
int main(){
    double a=1,b=1,d;
    cout<<"Fibonacci Numbers\n";
    cout <<"Please enter a number.\n";
    cin>> d;
    if(d==1){cout<<1;}
    if(d==2){cout<<1<<endl<<1<<endl;}
    for(int i=1; i<=d-2;i++){
            cout<<a<<endl<<b<<endl;
            a=a+b;
            b=b+a;
    }
    system("pause");
    return 0;
}
