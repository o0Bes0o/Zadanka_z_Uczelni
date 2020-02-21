//Wstęp do Programowania
//Duza silnia
//Autor: Bartosz Strojny
#include <iostream>
using namespace std;

int main() {
	int n, m=1;
	for(cin>>n;n;m=m%100000000*n--);
	cout<<m;
	return 0;
}