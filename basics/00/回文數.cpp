#include <iostream>
using namespace std;
int main(){
	cout<<"Palindromic Numbers"<<endl;
	int a,b,c,d;
	for(int i=1;i<1000;i++)
	{
		a=i;
		for(int j=i;j<1000;j++){
			b=j;
			c=a+b;
			d=10*(c%10)+((c-c%10)/10);
			if(d==a*b){
				cout<<a<<"+"<<b<<"="<<c<<"; "<<c<<"="<<d<<"="<<a<<"*"<<b<<endl;
			}
		}
	}
	//system("pause");
	return 0;
}
