//Wstęp do Programowania
//Zadanie: Silnia
//Autor: Bartosz Strojny
#include <iostream>
using namespace std;

int silnia(int n){
	n-1?n*=silnia(n-1):n=1;
	return n;
}

int main() {
	int n;
	cin>>n;
	cout<<silnia(n);
	return 0;
}