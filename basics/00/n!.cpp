#include <iostream>
using namespace std;
int main()
{
    int K,sum=1;
    cout<<"n!\n";
    cout<<"Please enter a number.\n";
    cin>>K;
    for(int i=1;i<=K;i++)
    {
            sum=i*sum;
            }
            cout<<sum;
    system("pause");
    return 0;
    }
