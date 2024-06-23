//Renzo Julian Vicente Ticona
//2024-119053
#include <iostream>
using namespace std;
int main(){
	int op1;
	int op2;
	int r;
	char op;
	cin>>op1;
	cin>>op;
	cin>>op2;
	switch (op){
		case '+':
			r=op1+op2;
			break;
		case '-':
			r=op1-op2;
			break;
		case '*':
			r=op1*op2;
			break;
		case '/':
			r=op1/op2;
			break;
	}
	cout<<"El resultado es: "<<r<<endl;
	return 0;
}
