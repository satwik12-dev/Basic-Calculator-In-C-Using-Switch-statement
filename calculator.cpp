#include<iostream>
using namespace std;
int main(){
	char ch;
	int a,b;
	cout<<"Enter the operator wich is to be perform(+,-,*,/,%):";
	cin>>ch;
	cout<<"Enter your number one:";
	cin>>a;
	cout<<"Enter your number two:";
	cin>>b;
	switch(ch){
		case '+':{
			int c=a+b;
			cout<<"Sum of a("<<a<<""") and b("<<b<<""") is:"<<c;
			break;
		}
		case '-':{

			int d=a-b;
			cout<<"Difference of a("<<a<<""") and b("<<b<<""") is:"<<d;
			break;
		}
		case '*':{
			int e=a*b;
			cout<<"Multiplication of a("<<a<<""") and b("<<b<<""") is:"<<e;
			break;
		}
		case '/':{
			float f=a/b;
				if (b==0){
					cout<<"Error!! Division by Zero not allowed.";
				}
				else{
					cout<<"Division of a("<<a<<""") and b("<<b<<""") is:"<<f;
				}
				break;
			}
		case '%':{
			float g=a%b;
			if (b==0){
				cout<<"Error!! Division by Zero not allowed.";
			}	
			else{
				cout<<"Reminder when a("<<a<<""") devide by b("<<b<<""") is:"<<g;
			}
			break;
		}
		default:
			cout<<"Operator doesnot exist in our list please use different operator.";
			break;
	}
	return 0;
}
