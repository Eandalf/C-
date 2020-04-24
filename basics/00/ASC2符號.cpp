#include <iostream>
using namespace std;
int main(){
	char c = 'a';
	int i;
	cout<<"輸入一個整數:";
	cin>>i;
	cout<<i<<endl;
	c += i;
	cout<<"此字元為:"<<c<<endl;
	//system("pause");
	return 0;
}
