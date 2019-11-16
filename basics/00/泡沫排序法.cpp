#include <iostream>
using namespace std;
int main()
{
    int l,K,counter=1;
    cout <<"Compare\n";
    cout<<"Please enter a number to determine the length of the array.\n";
    cin>>l;
    int a[l];
    for(int i=0;i<l;i++){
    cout<<"Please enter a number to the array.\n";
    cin>>a[i];
    }
    while(counter<=l)
    {
                      for(int j=0;j<l;j++)
                      {
                              if(a[j]<a[j+1]){K=a[j];a[j]=a[j+1];a[j+1]=K;}
                      }
            counter+=1;
    }
    cout<<"The arrangement of the array is ";
    for(int k=0;k<l;k++)
    {
            cout<<a[k]<<" ";
    }
    cout<<endl<<"The biggest number of the array is "<<a[0]<<".\n";
    system("pause");
    int hot;
    cout<<"Please enter a number to search where the number is.\n";
    cin>>hot;
    for(int h=0;h<=l;h++)
    {
        if (hot==a[h]){cout<<"The number is at a["<<h<<"].\n";break;}
    }
    system("pause");
    return 0;
}
