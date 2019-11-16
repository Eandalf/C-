#include <iostream>
using namespace std;
int main()
{
    int K;
    cout <<"The Triangle\n";
    cout<<"Please enter a number.\n";
    cin>>K;
    int p=1,m=1;
    for(int i=K;i>=0;i--)
         {  while(m<=i){cout<<" ";m++;}
            while(p<=2*(K-i)-1){cout<<"*";p++;}
            cout<<endl;
            p=1;m=1;
            }
    system ("pause");
    return 0;
    }
