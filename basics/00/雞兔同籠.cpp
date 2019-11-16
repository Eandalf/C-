#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout <<"The rabbits' and chickens' legs question.\n";
    cout <<"Please enter a number for the legs of rabbits and chickens.\n";
    cin>>a;
    d=a;
    if (a%2==1)
    {cout<<"No solution.\n";}
    else if(a%4==2)
    {
         while (a>0)
    {
         b=(a-2)/4;
         c=(d-4*b)/2;
         a-=4;
    if (b!=1)
    {cout<<"There are "<<b<<" rabbits.\n";}
    else {cout<<"There is a rabbit."<<endl;}
    if (c!=1)
    {cout<<"There are "<<c<<" chickens.\n";}
    else{cout <<"There is a chicken.\n";}
         }
    }
    else if(a%4==0)
    {
          while (a>0)
    {
         b=a/4;
         c=(d-4*b)/2;
         a-=4;
    if (b!=1)
    {cout<<"There are "<<b<<" rabbits.\n";}
    else {cout<<"There is a rabbit."<<endl;}
    if (c!=1)
    {cout<<"There are "<<c<<" chickens.\n";}
    else{cout <<"There is a chicken.\n";}
         }
         }
   system("pause");
   return 0;
    }
