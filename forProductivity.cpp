#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){
	string str;
	string cmd;
	ofstream ouf("productivity.txt",ios::app);
	int n=10;
	for(int i=0; i<n ; i++){
	cout<<"enter your research on productivity following '+'"<<endl;
	cin>>cmd;
	cout<<cmd;
	if(cmd=="+"){
		getline(cin,str);
		ouf<<str<<endl;
}else{
	cout<<"no data given"<<endl;
	
}
}
}
