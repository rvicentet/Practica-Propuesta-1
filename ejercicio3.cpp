//Renzo Julian Vicente Ticona
//2024-119053
#include<iostream>
using namespace std;
float suma(int);
int factorial(int);
int main(){
    int n;
    cin>>n;
    float sum=suma(n);
    cout<<sum;
}
float suma(int a){
    float s=0;
    for(int i=1;i<=a;i++){
        s=s+(float(factorial(i))/(2*i));
    }
    return s;
}
int factorial(int b){
    int f=1;
    for(int i=2;i<=b;i++){
        f=f*i;
    }
    return f;
}
