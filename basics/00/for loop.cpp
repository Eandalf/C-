#include <iostream>
using namespace std;
int main()
{
    float sum=1;
    for (int i=1;i<65;i++)
    {
        sum*=i;
        cout<<"i="<<i<<"\n"<<i<<"!="<<sum<<"\n";
        }
        system("pause");
        return 0;
    }
