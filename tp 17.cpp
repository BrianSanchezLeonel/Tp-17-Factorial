#include<bits/stdc++.h>
using namespace std;
int Factorial(int facticos);
int main(){
	int facticos;
	cout<<"Ingrese un numero:"<<endl;
	cin>>facticos;
	int f=Factorial(facticos);
	cout<<"El factorial del numero es:"<<f;
	return 0;
}
int Factorial(int facticos){
	int facto=1;
    	for(int i=1;i<=facticos;i++){
			facto=facto*i;
		}
	return facto;
}