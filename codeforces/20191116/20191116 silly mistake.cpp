//https://codeforces.com/contest/1253/problem/B
#include <iostream>

using namespace std;

int a[100000];
int c[100000];
int index[100000]; //stack
int index_top = 0;
int count[100000];

int main(){
	index[index_top] = -1;

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	bool success = true;
	int d=0, pre=0, post=0, amount=0;
	while(success && pre<n){
		amount+=a[post];
		while(amount!=0){
			if(post+1<n){
				post+=1;
				amount+=a[post];
			}else{
				success = false;
				break;
			}
		}

		for(int cursor=pre; success && cursor<=post; cursor++){
			if(a[cursor]>0){
				for(int i=0;success && i<index_top;i++){
					if(index[i]==a[cursor]){
						success = false;
					}
				}
				index[index_top] = a[cursor];
				count[index_top] = 1;
				index_top++;
				index[index_top] = -1;
			}else{
				int goal=-1;
				for(int i=0;i<index_top;i++){
					if(index[i]== (-a[cursor])){
						goal = i;
						break;
					}
				}
				if(goal!=-1){
					if(count[goal]==1){
						count[goal]+=1;
					}else{
						success = false;
					}
				}else{
					success = false;
				}
			}
		}

		bool interval_success = true;
		for(int i=0;i<index_top;i++){
			if(count[i]!=2){
				interval_success = false;
			}
		}
		if(interval_success){
			c[d] = post - pre +1;
			d+=1;
			pre = post +1;
			post += 1;
			amount = 0;

			index_top = 0;
			index[index_top] = -1;
		}else{
			post+=1;
		}
	}

	if(success){
		cout<<d<<endl;
		for(int i=0;i<d;i++){
			cout<<c[i];
			if(i<d-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}
