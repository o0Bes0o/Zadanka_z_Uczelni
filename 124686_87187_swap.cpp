//Wstęp do Programowania
//Zadanie: Swap
//Autor: Bartosz Strojny
#include <iostream>
using namespace std;
 
void zmiana(int &a, int &b){
	a^=b;
	b^=a;
	a^=b;
}
 
int main() {
	int a, b;
	cin>>a>>b;
	zmiana(a,b);
	cout<<a<<" "<<b;
	return 0;
}