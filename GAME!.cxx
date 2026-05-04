#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int Random_num(){
	random_device num;
	mt19937 gen(num());
	
	 uniform_int_distribution<> distrib(1, 3); 
     int randomNumber = distrib(gen);
     
	return randomNumber;
}
string selection(vector<string>&opt,int p,int b){
	if(opt[p]==opt[b]){
		return "TIE";
	}
	if(p==1){
		if(b==3){
			return "WIN!";
		}
		else{
			return "LOOSE";
		}
	}
	else if(p==2){
		if(b==1){
			return "WIN!";
		}
		else{
			return "LOOSE";
		}
	}
	else{
		if(b==2){
			return "WIN!";
		}
		else{
			return "LOOSE";
		}
	}
	
	return "NO ANSWER";
}
int main(){
	vector<string>opt={"Rock","Paper","Sesser"};
	int match=1;
	int plyr_in=0;
	int bot_in=0;
	
	cout<<"*****************ROCK,PAPER AND SESSER***********************";
	
	while(match<=5){
		cout<<"\n\n Select your option......"<<endl<<"1.Rock\n2.Paper\n3.Sesser\n\nEnter your option as(1/2/3):";
		cin>>plyr_in;
		bot_in=Random_num();
		cout<<"\nYou Selected:"<<opt[plyr_in-1]<<" and Bot Selected:"<<opt[bot_in-1]<<endl;
		cout<<endl<<"YOU "<<selection(opt,plyr_in,bot_in);
		match++;
		
		
	}
}