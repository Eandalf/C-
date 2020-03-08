#include <iostream>
using namespace std;
int main()
{
	int A,flag=0;
	cout<<"Please enter a number to check if it is a prime number or not.\n";
	cin>>A;
	int B=A-1;
	for(int i=B;i>0;i--)
	{
		if(A%i==0)
		{flag++;
		}
	}
	if(flag==0)
	{cout<<"It's a prime number.\n";}
	else{cout<<"It's not a prime number.";}
	//system ("pause");
	return 0;
}
