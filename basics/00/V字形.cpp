#include<iostream>
using namespace std;
int main(){
    int K;
    cout<<"V\n";
    cout<<"Please enter a number.\n";
    cin>>K;
    int p=1,q=1;
    for(int i=1;i<K;i++)
    {
         while(p<=i){cout<<" ";p++;}
         cout<<"*";
         while(q<=2*(K-i)-3){cout<<" ";q++;}
         if(p!=K){cout<<"*";}
         cout<<endl;
         p=1;q=1;
         }
    system ("pause");
    return 0;
}
