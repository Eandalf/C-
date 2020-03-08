#include<iostream>
using namespace std;
int main(){
	int K;
	cout<<"Inverted Triangle\n";
	cout<<"Please enter a number.\n";
	cin>>K;
	int p=1,q=1;
	for(int i=K;i>=0;i--)
	{
		while(p<=(K-i)){cout<<" ";p++;}
		while(q<=2*i-1){cout<<"*";q++;}
		cout<<endl;
		p=1;q=1;
	}
	//system("pause");
	return 0;
}
