#include<iostream>
using namespace std;
int main(){
	int  a,b,c,d,e,f,g;
	int p;//For percenatge
	cout<<"Submit Your Discrete Structure Score:"<<endl;
	cin>>a;
	cout<<"Submit Your ITC Score:"<<endl;
	cin>>b;
	cout<<"Submit Your Functional English Score:"<<endl;
	cin>>c;
	cout<<"Submit Your Basic Electronic Score:"<<endl;
	cin>>e;
	cout<<"Submit Your Pre Calculus Score:"<<endl;
	cin>>f;
	cout<<"Submit Your Ideology & Constitution Score:"<<endl;
	cin>>g;
	//Algorithm For finding Percentage
	p=((a+b+c+d+e+f+g)*100/700);
	cout<<"Your Acquired Percentage is:\n"<<p<<endl;
	if(p>=90){
		cout<<"Your Grade achieved is A+:";
	}
	else if(p>=80){
		cout<<"Your Grade is A:";
	}
	else if(p>=70){
		cout<<"Your Grade is B:";
	}
	else if(p>=60){
		cout<<"Your Grade is C:";
	}
	else if(p>=50){
		cout<<"Your Grade is D:";
	}
else if(p>=40){
		cout<<"Your Grade is E:";
	}else{
		if(p<=30)
	cout<<"Sorry You are Fail,Learn from your mistakes and do better next time:";
	}
	
	return 0;
}