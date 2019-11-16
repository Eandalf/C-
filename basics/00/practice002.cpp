#include <iostream>
using namespace std;
int main(){
    int C,E,M;
    cout<<"Please enter your grade of Chinese."<<endl;
    cin>>C;
    cout<<"Please enter your grade of English."<<endl;
    cin>>E;
    cout<<"Please enter your grade of Math."<<endl;
    cin>>M;
    cout<<"Total:"<<C+E+M<<endl;
    float L=C,P=E,O=M;
    cout<<"Average:"<<(L+P+O)/3<<endl;
    system("pause");
    return 0;
}
