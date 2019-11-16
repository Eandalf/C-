#include <iostream>
using namespace std;
int main()
{
    int l,K;
    cout<<"Selection Sort\n";
    cout<<"Please determine the length of the array.\n";
    cin >>l;
    int a[l];
    for(int i=0;i<l;i++)
    {cout<<"Please enter a number for the array.\n";
    cin>>a[i];
    }
    for(int j=0;j<l;j++)
    {
            for(int y=j;y<l;y++){if(a[j]<=a[y]){K=a[j];a[j]=a[y];a[y]=K;}}
            }
            cout<<"The organized array is ";
            for(int k=0;k<l;k++){cout<<a[k]<<" ";}
            cout<<".\n";
system("pause");
return 0;
}
