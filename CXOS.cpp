#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	while(true){
		cin>>x;
		if(x=="ver"){
			cout<<"CXOS1.0.0 DOS模拟器"<<endl;
		}
		else if(x=="calc"){
			cout<<"第一个数:";
			long long a,b;
			cin>>a;
			cout<<"第二个数:";
			cin>>b;
			cout<<"运算符号:";
			string o;
			cin>>o;
			if(o=="+"){
				cout<<a+b<<'\n';
			}
			else if(o=="-"){
				cout<<a-b<<"\n";
			}
			else if(o=="*"){
				cout<<a*b<<endl;
			}
			else{
				cout<<a/b<<'\n';
			}
		}
		else{
			cout<<x<<"不是一个命令";
		}
	}
}
