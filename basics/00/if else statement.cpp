#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter your weight.\n";
    float Weight, Height;
    cin>>Weight;
    cout<<"Please enter your height.\n";
    cin>>Height;
    float BMI=Weight/Height/Height;
    cout <<BMI<<"\n";
    if(BMI<18.5)
    cout<<"You are too thin."<<endl;
    else if(BMI<24)
    cout <<"You are healthy.\n";
    else if(BMI<27)
    cout<<"Just a quite fat.\n";
    else if(BMI<30)
    cout <<"A little bit fat.\n";
    else if(BMI<35)
    cout <<"You need to exercise more.\n";
    else
    cout<<"Exercise!Exercise!Exercise!\n";
    cout<<"What's your age?"<<endl;
    float Year;
    cin>>Year;
    cout<<"What's your gender?"<<"If you are male, please enter 1.If you are female, please enter 0."<<endl;
    int sex;
    cin>>sex;
    float body=1.2*BMI+0.23*Year-5.4-10.8*sex;
    cout<<"Your body fat percentage is "<<body<<".\n";
    if(sex==1)
    {
    if (body<0.15)
    {cout <<"Thin\n";}
    else if(body<0.20)
    {cout<<"OK\n";}
    else if(body<0.28)
    {cout<<"Fat\n";}
    }
    else
    {
    if (body<0.20)
    {cout <<"Thin\n";}
    else if(body<0.30)
    {cout<<"OK\n";}
    else if(body<0.35)
    {cout<<"Fat\n";}
    }
    system("pause");
    return 0;
}
