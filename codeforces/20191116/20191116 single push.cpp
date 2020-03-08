//https://codeforces.com/contest/1253/problem/A
#include <iostream>

using namespace std;

int a[100000];
int b[100000];

int main(){
	bool flag=true;
	int t=0,n=0,difMem=0,segments=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}

		flag = true;
		difMem = 0;
		segments = 0;
		for(int j=0;j<n;j++){
			if(a[j]==b[j]){
				continue;
			}else{
				if(j==0){
					segments+=1;
				}else{
					if(b[j-1]==a[j-1]){
						// finding the number of needed intervals
						segments+=1;
					}
				}
				if(difMem == 0){
					difMem = b[j]-a[j];
				}else{
					if(difMem != b[j]-a[j]){
						flag = false;
						break;
					}
				}
			}
		}

		if(segments==0){
			cout<<"Yes"<<endl;
		}else if(segments==1){
			if(flag && difMem>0){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
