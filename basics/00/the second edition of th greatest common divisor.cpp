#include <iostream>
using namespace std;
int main()
{
    int a,b,p,k;
cout<<"The Greatest Common Divisor\n";
cout<<"Please enter a number.\n";
cin>>a;
cout<<"Please enter another number.\n";
cin>>b;
int v=a,m=b;
if(a<b){k=a;a=b;b=k;}
for(int i=b;i>0;i--)
{
        if(b%i==0){
                      if(a%i==0){p=i;break;}
                      }
        }
        cout<<"The greatest common divisor of "<<v<<" and "<<m<<" is "<<p<<".\n";
system("pause");
return 0;
}
