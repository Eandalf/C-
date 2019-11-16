#include <iostream>
using namespace std;
int main()
{
  const int a=1256;
  int q;
  cout <<"Code Guessing\n";
  do
  {
  cout<<"Please guess a four-digit number.\n";
  cin>>q;
  if(q!=a){cout<<"You are wrong!\n";}
  if(q==a){break;}
  }while(q!=a);
  if (q==a)
  {
           cout<<"You are right!\n";
           }
  system("pause");
  return 0  ;
  }
