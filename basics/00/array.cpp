#include<iostream>
using namespace std;
int main(){
	cout<<"Array\n";
	int a;
	cout<<"Please enter an integer.\n";
	cin>>a;
	int num[a];
	for(int i=0;i<a;i++)
	{
		cout<<"Please enter a number.\n";
		cin >>num[i];
	}
	for(int j=0;j<a;j++){cout<<num[j]<<" ";}
	//system ("pause");
	return 0;
}
