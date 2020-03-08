#include<iostream>
using namespace std;
int main(){
	int N,a=1,b=800,c=400;
	cout <<"Please enter an integer.\n";
	cin>>N;
	for (int i=1;i<=N;i++)
	{
		if(a==1){cout<<b+c<<endl;}
		else if(a==2){cout<<b-c<<endl;}
		else if(a==3){cout<<b*c<<endl;}
		else if(a==4){cout<<b/c-(b/c)%1<<endl;}
		a++;
		if (a>5){a=a-4;}
	}
	//system ("pause");
	return 0;
}
