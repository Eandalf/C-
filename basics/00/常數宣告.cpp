#include <iostream>
using namespace std;
#define pi 3.1415926
int main()
{
    float R;
    cout<<"Please enter the length of radius."<<endl;
    cin>>R;
    cout<<"The area="<<R*R*pi<<endl;
    const float H=3.14;
    cout<<"The circumference="<<2*R*H<<endl;
    system("pause");
    return 0;
    }
