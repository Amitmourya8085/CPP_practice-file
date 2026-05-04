#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

void Show_Task(const vector<string>&Task){
	if(Task.empty())
		cout<<"LIST IS EMPTY";
	
	for(int i=0;i<Task.size();i++){
			cout<<i+1<< Task[i];
		}	
}

int main(){
	vector<string>Tasks;
	string task,line;
	
	ifstream inFile("Amit.txt");
	while (getline(inFile,line)){
		Tasks.push_back(line);
	}
	inFile.close();
	
	int choice;
	
	cout<<"Enter your choice------\n1.Veiw task\n2Add Task";
	cin>>choice;
	cin.ignore();
	
	while(true){
		if(choice==1){
			Show_Task(Tasks);
		}
		else if(choice==2){
			cout<<"\nEnter new task:";
			getline(cin,task);
			Tasks.push_back(task);
			//Save_Task(Tasks);
		}
		else{
			break;
		}
		
	}
	return 0;
}
