#include <iostream>
using namespace std;
int main(){
    int sum=0,t,n=1;
    cout<<"Enter a number.\n";
    cin>>t;
    while(n<=t){
        sum+=n;
        n+=1;
    }
    cout<<"1+2+3+......+"<<t<<"="<<sum<<endl;
    system("pause");
    return 0;
}
