//Renzo Julian Vicente Ticona
//2024-119053
#include <iostream>
using namespace std;
int main(){
    int n1;
	int n2;
	int c=0;
	int i=1;
    cin>>n1;
    cin>>n2;
    while(i<=n1&&i<=n2){
        if(n1%i==0&&n2%i==0){
            c++;
        }
        i++;
    }
    if(c>1){
        cout<<"No son PESI";
    }
	else{
        cout<<"Son PESI";
    }
	}
