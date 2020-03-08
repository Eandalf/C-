#include<iostream>
using namespace std;
int main(){
	cout<<"Examinator\n";
	//system("pause");
	int a,b,c,d;
	for(int i=1000;i<10000;i++){
		a=(i-i%1000)/1000;
		b=((i%1000)-(i%1000)%100)/100;
		c=(i%100-i%100%10)/10;
		d=i%10;
		if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==i){cout<<i<<endl;};
	};
	//system("pause");
	return 0;
}
