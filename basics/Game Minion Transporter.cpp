#include<iostream>
using namespace std;
void printName(int in[],int number);
void moving(int a[],int b[], int& numa, int& numb, int lantern);
int check(int a[], int b[], int& numb);

int main()
{
	cout<<"You are Minion Kevin! You must direct your team of 6 Minion Bomb Transporters across a high narrow bridge."<<endl;
	cout<<"You, Jerry, and Carl are seasoned experts,"<<endl;
	cout<<"but Dave, Stuart, and Bob are over-excited newbies."<<endl;
	cout<<endl;

	cout<<"Initially, all 6 of you are on one side of the bridge."<<endl;
	cout<<"You need to get across the bridge."<<endl;
	cout<<"But, the bridge can only take the weight of 1 or 2 Transporters at a time,"<<endl;
	cout<<"and it��s dark!"<<endl;
	cout<<"You only have a single lantern that must be carried with each crossing to light your way across!"<<endl;
	cout<<endl;

	cout<<"Even worse, when newbies and experts are both together on one side and newbies outnumber expects,"<<endl;
	cout<<"they start squabbling and hitting one another,"<<endl;
	cout<<"their bombs go off, and everybody dies!"<<endl;
	cout<<endl;

	int a[]={1,1,1,1,1,1};
	int b[]={0,0,0,0,0,0};
	//Kevin:0, Jerry:1, Carl:2, Dave:3, Stuart:4, and Bob:5. Filled:1, Empty:0;

	int numa=6,numb=0,lantern=0,index=1;//lantern:0->a, lantern:1->b; index=1:continue, index=0:failure, index=2:triumph;
	char playAgain='y';
	while(playAgain=='y'||playAgain=='Y'){
		for(int i=0;i<6;i++)
		{
			a[i]=1;
			b[i]=0;
		}
		lantern=0;
		numa=6;
		numb=0;
		index=1;

		while(1){
			printName(a,numa);
			if(numa>1)
			{
				cout<<" are on the SideA of the bridge."<<endl;
			}else if(numa==1)
			{
				cout<<" is on the SideA of the bridge."<<endl;
			}else{
				cout<<"No one is on the SideA of the bridge."<<endl;
			}

			printName(b,numb);
			if(numb>1)
			{
				cout<<" are on the SideB of the bridge."<<endl;
			}else if(numb==1)
			{
				cout<<" is on the SideB of the bridge."<<endl;
			}else{
				cout<<"No one is on the SideB of the bridge."<<endl;
			}

			/*cout<<endl<<"***2"<<endl;
            cout<<numa<<endl;
            cout<<endl<<"***2"<<endl;
            cout<<numb<<endl;
            cout<<endl<<"***2"<<endl;*/

			cout<<"Enter the minion's name you want to move";
			if(lantern==0)
			{
				cout<<" from SideA to SideB!"<<endl;
			}else{
				cout<<" from SideB to SideA!"<<endl;
			}

			moving(a,b,numa,numb,lantern);

			if(lantern==1)
			{
				lantern=0;
			}else{
				lantern=1;
			}
			//cout<<endl<<"***1"<<endl<<lantern<<endl<<"***1"<<endl;

			index = check(a,b,numb);
			if(index==1)
			{
				cout<<endl<<"Safe! Continue!"<<endl<<endl;
			}else if(index==0){
				cout<<endl<<"Boom!~~~~~"<<endl<<"You Lose!"<<endl<<endl;
				break;
			}else{
				cout<<endl<<"You Win The Game!"<<endl<<endl;
				break;
			}
		}

		cout<<"Do you want to play again?(yes:y, no:n)"<<endl;
		cin>>playAgain;
		if(playAgain=='y'||playAgain=='Y')
		{
			cout<<endl<<"Play Again!"<<endl;
		}else{
			cout<<"This is the end of the game! Bye Bye~"<<endl;
		}
	}

	return 0;
}

void printName(int in[],int number){
	int counter=0;
	for(int i=0;counter<number;i++)
	{
		//cout<<endl<<"***"<<i<<endl;
		if(in[i]==1){
			if(counter>=1)
			{
				if((number-counter)==1){
					cout<<", and ";
				}else{
					cout<<", ";
				}
			}

			switch(i)
			{
			case 0:
				cout<<"Kevin";
				break;
			case 1:
				cout<<"Jerry";
				break;
			case 2:
				cout<<"Carl";
				break;
			case 3:
				cout<<"Dave";
				break;
			case 4:
				cout<<"Stuart";
				break;
			case 5:
				cout<<"Bob";
				break;
			}
			counter+=1;
		}
	}
	/*cout<<endl<<"***"<<endl;;
    for(int i=0;i<6;i++)
    {
        cout<<in[i]<<" ";
    }
    cout<<endl<<"***"<<endl;*/
}

void moving(int a[],int b[], int& numa, int& numb,int lantern){
	cout<<endl<<"Kevin:K, Jerry:J, Carl:C, Dave:D, Stuart:S, Bob:B, and Empty:E."<<endl;
	//cout<<endl<<"***"<<endl<<lantern<<endl<<"***"<<endl;
	cout<<"To choose from: ";
	if(lantern==0)
	{
		printName(a,numa);
		//cout<<endl<<"checked0"<<endl;
	}else{
		printName(b,numb);
		//cout<<endl<<"checked1"<<endl;
	}
	cout<<endl;

	/*cout<<endl<<"***1"<<endl;
    cout<<numa<<endl;
    cout<<endl<<"***1"<<endl;
    cout<<numb<<endl;
    cout<<endl<<"***1"<<endl;*/

	char moving1,moving2;
	cin>>moving1;
	cin>>moving2;
	if(lantern==0)
	{
		switch(moving1)
		{
		case 'K':
		a[0]=0;
		b[0]=1;
		break;
		case 'J':
			a[1]=0;
			b[1]=1;
			break;
		case 'C':
			a[2]=0;
			b[2]=1;
			break;
		case 'D':
			a[3]=0;
			b[3]=1;
			break;
		case 'S':
			a[4]=0;
			b[4]=1;
			break;
		case 'B':
			a[5]=0;
			b[5]=1;
			break;
		}
		if(moving1=='K'||moving1=='J'||moving1=='C'||moving1=='D'||moving1=='S'||moving1=='B')
		{
			numa-=1;
			numb+=1;
		}

		switch(moving2)
		{
		case 'K':
			a[0]=0;
			b[0]=1;
			break;
		case 'J':
			a[1]=0;
			b[1]=1;
			break;
		case 'C':
			a[2]=0;
			b[2]=1;
			break;
		case 'D':
			a[3]=0;
			b[3]=1;
			break;
		case 'S':
			a[4]=0;
			b[4]=1;
			break;
		case 'B':
			a[5]=0;
			b[5]=1;
			break;
		}
		if(moving2=='K'||moving2=='J'||moving2=='C'||moving2=='D'||moving2=='S'||moving2=='B')
		{
			numa-=1;
			numb+=1;
		}
	}else{
		switch(moving1)
		{
		case 'K':
		b[0]=0;
		a[0]=1;
		break;
		case 'J':
			b[1]=0;
			a[1]=1;
			break;
		case 'C':
			b[2]=0;
			a[2]=1;
			break;
		case 'D':
			b[3]=0;
			a[3]=1;
			break;
		case 'S':
			b[4]=0;
			a[4]=1;
			break;
		case 'B':
			b[5]=0;
			a[5]=1;
			break;
		}
		if(moving1=='K'||moving1=='J'||moving1=='C'||moving1=='D'||moving1=='S'||moving1=='B')
		{
			numa+=1;
			numb-=1;
		}

		switch(moving2)
		{
		case 'K':
			b[0]=0;
			a[0]=1;
			break;
		case 'J':
			b[1]=0;
			a[1]=1;
			break;
		case 'C':
			b[2]=0;
			a[2]=1;
			break;
		case 'D':
			b[3]=0;
			a[3]=1;
			break;
		case 'S':
			b[4]=0;
			a[4]=1;
			break;
		case 'B':
			b[5]=0;
			a[5]=1;
			break;
		}
		if(moving2=='K'||moving2=='J'||moving2=='C'||moving2=='D'||moving2=='S'||moving2=='B')
		{
			numa+=1;
			numb-=1;
		}
	}

	/*cout<<endl<<"***1"<<endl;
    cout<<numa<<endl;
    cout<<endl<<"***1"<<endl;
    cout<<numb<<endl;
    cout<<endl<<"***1"<<endl;*/
}

int check(int a[], int b[], int& numb){
	if(numb==6)
	{
		return 2;
	}

	int good=0,bad=0;
	for(int i=0;i<6;i++){
		if(i<3&&a[i]==1)
		{
			good+=1;
		}
		if(3<=i&&a[i]==1)
		{
			bad+=1;
		}
	}
	if(bad>good&&good!=0)
	{
		return 0;
	}
	bad=0;good=0;
	for(int i=0;i<6;i++){
		if(i<3&&b[i]==1)
		{
			good+=1;
		}
		if(3<=i&&b[i]==1)
		{
			bad+=1;
		}
	}
	if(bad>good&&good!=0)
	{
		return 0;
	}else{
		return 1;
	}

}
