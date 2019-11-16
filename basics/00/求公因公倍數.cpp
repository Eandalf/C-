#include <iostream>
using namespace std;
int main()
{
    cout<<"To find out the greatest common divisor and the least common multiple of the two numbers.\n";
    int h,j;
    cout<<"Please enter a number.\n";
    cin>>h;
    cout<<"Please enter a number.\n";
    cin>>j;
    int we=h,hk=j;
    int q;
    if(j>h)
    {
           q=j;
           j=h;
           h=q;
           }
           int c=h%j;
    while(c!=0)
    {
               h=j;
               j=c;
               c=h%j;
           }
           cout<<"The greatest common divisor of the two numbers is "<<j<<endl;
           cout<<"The least common multiple of the two numbers is "<<we*hk/j<<endl;
    system("pause");
    return 0;
    }
