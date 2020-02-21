//Wstęp do Programowania
//Zadanie: NWD
//Autor: Bartosz Strojny
#include <iostream>
using namespace std;

int NWD(int &a, int &b){
	a>b?a-=b:b-=a;
	if(a*b)NWD(a,b);
	return a+b;
}

int main() {
	int a, b;
	cin>>a>>b;
	cout<<NWD(a,b);
	return 0;
}