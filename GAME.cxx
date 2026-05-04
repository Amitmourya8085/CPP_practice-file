#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int numQ1(int val){
 val= val+10;
  return val;
}
int numQ2(int val){
  val=val+9;
  return val;
}

int main(){
	int val1,val2,opt=3;
	cout<<"------------Welcome--------------"<<endl;
	
		
	while(true){
		val1=numQ1(opt);
		val2=numQ2(opt);
		cout<<val1<<"+ "<<val2<<"= ?";
		cout<<"\n(1)."<<val1+val2<<"\n(2)."<<val1+3+val2<<endl;
		cin>>opt;
		
		if(opt==val1+val2 || opt==1){
		 	cout<<"\n correct"<<endl;
		 	cout<<"----------next question-----------"<<endl;
		}
		else{
			cout<<"\n incorrect"<<endl;
		}
	}
	
	return 0;
		
}