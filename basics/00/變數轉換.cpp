#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"�п�Ja��"<<"\n";
    cin>>a;
    cout<<"�п�Jb��"<<endl;
    cin>>b;
    int c=a;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"switch a and b\n";
    a=b,b=c;
    cout<<"a="<<a<<endl<<"b="<<b<<"\n";
    system("pause");
    return 0;
    }
