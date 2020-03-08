#include<iostream>
using namespace std;

int main()
{
	static int a[4]={7,8,9},b[4]={4,5,6},c[4],i;

	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;

	// execution result:
	// 11 13 15
}
