#include <iostream>
using namespace std;
int main(){
	int n;
	cout <<"Please enter a positive integer.\n";
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		int g = i;
		for(int k=1;k<=2*g+1;k++)
		{cout<<"*";
		}
		for(int j=1;j<=i;j++)
		{cout<<" ";
		}
		cout<<endl;
	}
	//system("pause");
	return 0;
}
